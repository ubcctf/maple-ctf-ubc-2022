from Crypto.Util.number import long_to_bytes, inverse
from gmpy2 import iroot

N = 85296113154028266649672161860329361439935266228905629388726013424103003229818805929348250297726228216361916145120272570744501496079735410949226284857146260962752588479499367910582240029329267295901611756016118582770290309132799890905930226231742595748717830957810354752447792103653956003395218828964428421661
e = 3
ciphertext = 121098269316542670291503874251201317814247329243208799383594138766421611605510707696480316724191110125699109139761891217594094151254743752917029528490060357300730222261644995695658612386816700954494942529833311406855562210279835749

# RSA relies on the difficulty of solving: msg ^ e == ciphertext (mod N)
# But in this case, msg is significantly smaller than the modulus
# Thus, we have msg ^ 3 = ciphertext (without modular arithmetic), and we can simply take the cube root of the ciphertext to recover msg

msg = iroot(ciphertext, 3)
# Check that the cube root exists
assert(msg[1])

print(f'Flag: {long_to_bytes(msg[0])}')