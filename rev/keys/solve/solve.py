enc_flag = b'\x27\xe2\x74\xb9\x2f\xf8\x70\xbd\x79\xdc\x4f\x90\x13\xdc\x4d\x86\x15\xcb\x30\x87\x0e\xc0\x34\x91\x79\xe7\x5b\xe4\x24\xdc\x50\x9d\x0f\xdc\x46\xe4\x24\xb7\x76\xac\x37'
key = b'\x4a\x83\x04\xd5'

flag = ""
for i in range(len(enc_flag)):
    print(chr(enc_flag[i] ^ key[i % len(key)]), end="")