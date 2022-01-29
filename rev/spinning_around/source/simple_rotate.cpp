#include<string>
#include<iostream>
using namespace std;

struct node{
  char key;
  node* ch[2]; // don't keep parent pointers
  node(char c) : key(c) {
    ch[0] = ch[1] = NULL;
  }
};
string table[] = 
{ 
"(()((()(()()))(((((()())())())((()((()(()()))()))()))(((()(((()())())(()())))((()((()(()()))()))(((()())())(()()))))(((()())())(()()))))))(((((()())())())())((()(()()))(((()())(()()))(()(()(()()))))))",
"(()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))((((()())(((()())())(()())))(((()())())(()())))(((((()())())())())((()(()()))(((()())(()()))(()(()(()())))))))",
"((()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))((((()())(((()())())(()())))(((()())())(()())))((()())())))((()())((()(()()))(((()())(()()))(()(()(()()))))))",
"((()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))(((()())(((()())())(()())))(((()())())())))((()((()())()))((()())((()(()()))(((()())(()()))(()(()(()())))))))",
"((()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))((()())(()())))(((()(()()))(((()())())()))((()((()())()))((()())((()(()()))(((()())(()()))(()(()(()()))))))))",
"(((()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))((()())(()())))(((()(()()))(((()())())()))((()((()())()))((()())((()(()()))(((()())(()()))(()())))))))(()())",
"(((()((()(()()))(((((()())())())((()((()(()()))()))()))((()(((()())())(()())))(()(()()))))))((()())(()())))(((()(()()))(((()())())()))((()((()())()))(()()))))(((()(()()))(((()())(()()))(()())))(()()))",
"(()((()(()()))((((()())())())(()()))))(((((((()())())())((()(((()())())(()())))(()(()()))))((()())(()())))(((()(()()))(((()())())()))((()((()())()))(()()))))(((()(()()))(((()())(()()))(()())))(()())))",
"((()((()(()()))((((()())())())(()()))))(((((((()())())())((()(((()())())(()())))(()(()()))))((()())(()())))(((()(()()))(((()())())()))((()((()())()))(()()))))(()())))((()(((()())(()()))(()())))(()()))",
"((()((()(()()))((((()())())())(()()))))(((()())())()))((((((()(((()())())(()())))(()(()())))((()())(()())))(((()(()()))(((()())())()))((()((()())()))(()()))))(()()))((()(((()())(()()))(()())))(()())))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))(((((()(((()())())(()())))(()(()())))((()())(()())))(((()(()()))(((()())())()))((()((()())()))(()()))))(()())))((()(((()())(()()))(()())))(()()))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))((((()(((()())())(()())))(()(()())))((()())(()())))((()(()()))())))(((((()())())((()((()())()))(()())))(()()))((()(((()())(()()))(()())))(()())))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))((((()(((()())())(()())))(()(()())))((()())(()())))((()(()()))())))(((()())())(()())))((((()())(()()))(()()))((()(((()())(()()))(()())))(()())))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))((((()(((()())())(()())))(()(()())))((()())(()())))(()())))(((()())(((()())())(()())))((((()())(()()))(()()))((()(((()())(()()))(()())))(()()))))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))((()(((()())())(()())))(()())))(((()((()())(()())))(()()))(((()())(((()())())(()())))((((()())(()()))(()()))((()(((()())(()()))(()())))(()())))))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))((()(((()())())(()())))(()())))(((()((()())(()())))(()()))(((()())(((()())())(()())))((((()())(()()))(()()))()))))((((()())(()()))(()()))(()()))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))((()(((()())())(()())))(()())))(((()((()())(()())))(()()))((()())(((()())())(()())))))(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))((()(((()())())(()())))(()())))(()()))((((()(()()))(()()))((()())(((()())())(()()))))(((((()())(()()))(()()))())((((()())(()()))(()()))(()()))))",
"((()((()(()()))((((()())())())(()()))))(((()())())()))((((()(((()())())(()())))(()()))(()()))((((()(()()))(()()))((()())(((()())())(()()))))(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))((((()(((()())())(()())))(()()))(()()))(((()(()()))(()()))((()())((()())())))))((()())(((((()())(()()))(()()))())((((()())(()()))(()()))(()()))))",
"(((()((()(()()))((((()())())())(()()))))(((()())())()))(((()(((()())())(()())))(()()))()))((()(((()(()()))(()()))((()())((()())()))))((()())(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))(((()(((()())())(()())))(()()))()))((()(((()(()()))(()()))((()())((()())()))))(()())))(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))",
"((((()((()(()()))((((()())())())(()()))))(((()())())()))(((()(((()())())(()())))(()()))()))(()()))(((((()())(()()))((()())((()())())))(()()))(((((()())(()()))(()()))())((((()())(()()))(()()))(()()))))",
"((()((()(()()))((((()())())())(()()))))((()())()))(((()(((()(((()())())(()())))(()()))()))(()()))(((((()())(()()))((()())((()())())))(()()))(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))(((()(((()(((()())())(()())))(()()))()))(()()))()))((((()(()()))((()())((()())())))(()()))(((((()())(()()))(()()))())((((()())(()()))(()()))(()()))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((()(()()))())((((()(()()))((()())((()())())))(()()))(((((()())(()()))(()()))())((((()())(()()))(()()))(()())))))",
"((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((()(()()))())((((()(()()))((()())((()())())))(()()))(((()())(()()))(()())))))(()((((()())(()()))(()()))(()())))",
"((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((()(()()))())((((()(()()))((()())((()())())))(()()))((()())(()())))))((()())(()((((()())(()()))(()()))(()()))))",
"((()((()(()()))((((()())())())(()()))))((()())()))(((()((()(((()())())(()())))(()())))(((()(()()))())((((()(()()))((()())((()())())))(()()))((()())(()())))))((()())(()((((()())(()()))(()()))(()())))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))(((()(()()))())())))(((((()())((()())((()())())))(()()))((()())(()())))((()())(()((((()())(()()))(()()))(()())))))",
"((((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))(((()(()()))())())))(((((()())((()())((()())())))(()()))((()())(()())))()))(()(()((((()())(()()))(()()))(()()))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((((()(()()))())())(((((()())((()())((()())())))(()()))((()())(()())))()))(()(()((((()())(()()))(()()))(()())))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))())(((()(((()())())(()())))(()()))(((((()(()()))())())(((((()())((()())((()())())))(()()))((()())(()())))()))(()(()((((()())(()()))(()()))(()()))))))",
"((((()((()(()()))((((()())())())(()()))))((()())()))())(((()(((()())())(()())))(()()))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))(()(()(()((((()())(()()))(()()))(()())))))",
"((()((()(()()))((((()())())())(()()))))((()())()))((()(((()(((()())())(()())))(()()))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))(()(()(()((((()())(()()))(()()))(()()))))))",
"(((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))(()(()(()((((()())(()()))(()()))(()()))))))",
"((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))(((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))(()(()(()())))))(((()(()()))(()()))(()()))",
"((()((()(()()))((((()())())())(()()))))((()())()))(((()((()(((()())())(()())))(()())))(((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))(()(()(()())))))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"(((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(((()(()()))(()()))(()())))",
"((((()((()(()()))((((()())())())(()()))))((()())()))((()((()(((()())())(()())))(()())))((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))))((()(()(()())))(()(()()))))((()())(()()))",
"(((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))((((((()(()()))())())((((()())((()())((()())())))(()()))((()())(()()))))((()(()(()())))(()(()()))))((()())(()())))",
"((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))((((()(()()))())())()))(((((()((()())((()())())))(()()))((()())(()())))((()(()(()())))(()(()()))))((()())(()())))",
"(((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))((((()(()()))())())()))((((()((()())((()())())))(()()))((()())(()())))(()(()()))))((()(()(()())))((()())(()())))",
"(((((()((()(()()))((((()())())())(()()))))((()())()))(()((()(((()())())(()())))(()()))))((((()(()()))())())()))((()((()())((()())())))(()())))((((()())(()()))(()(()())))((()(()(()())))((()())(()()))))",
"()(((((((()(()()))((((()())())())(()())))((()())()))(()((()(((()())())(()())))(()()))))((((()(()()))())())()))((()((()())((()())())))(()())))((((()())(()()))(()(()())))((()(()(()())))((()())(()())))))",
"(()(((((((()(()()))((((()())())())(()())))((()())()))(()((()(((()())())(()())))(()()))))((((()(()()))())())()))((()((()())((()())())))(()())))((((()())(()()))(()(()())))((()(()(()())))((()())())))))()",
};

node* rot(node* e, bool r) {
  node * c = e->ch[r];
  e->ch[r] = c->ch[r^1];
  c->ch[r^1] = e;
  e = c;
  return e;
}

node* find(char c, node* u) { 
  // returns found node as root, rotate as we gooooo (who cares 'bout balance)
  if (u == NULL) { // if node does not exist, create it! 
    u = new node(c);
  }
  if (c == u->key) return u;
  if (c < u->key) { // definitely not equal
    u->ch[0] = find(c, u->ch[0]);
    return rot(u, 0);
  } else {
    u->ch[1] = find(c, u->ch[1]);
    return rot(u, 1);
  }
}

string pretty_print(node* u) {
  if (u==NULL) return "";
  string s = "(";
  s += pretty_print(u->ch[0]);
  s += ")";
  s += "(";
  s += pretty_print(u->ch[1]);
  s += ")";
  return s;
}

int main(int argc, char* argv[]){
  if (argc != 2) return 0;
  string s = argv[1];
  node* tree = NULL;
  const unsigned int sz = 51;
  if (s.size()!=sz) return -1;
  string l = "m&($i}9nl1)a0vo6_p27dxb{^8wgzyef#cj5kq+tsu@3*h4%r!";
  for(char c:l) {
    tree = find(c, tree);
  }
  for(unsigned int i=0;i<s.size();i++) {
    char c = s[i];
    tree = find(c, tree);
    if (pretty_print(tree) != table[i]) {
      cerr << "found " << pretty_print(tree) << " when expected " << table[i] <<endl;
      exit(-1);
    }
  }
  cout << "You found the flag!" <<endl;
}