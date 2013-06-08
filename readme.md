CRYPTODEGREE
=============
CryptoDegree is just a small program that allows you to encrypt the contents of a file.
The operation is very simple: the program reads character by character the source file, performs an XOR between the ascii value of each character and the private key and saves the result to another file.
The program is, therefore, an implementation of a simple symmetric encryption algorithm.

DISCLAIMER
=============
The program requires that users agree on the use of a single numerical key that will be used for encryption and decryption of the message.
The program has a use for purely educational: it works, but it's just a bunch of bad code.

COMPILING
=============
gcc cryptodegree.c -o cryptodegree

HOW TO USE?
=============
The program accept 3 parameters: 
- The path of the origin file
- The path of the destination file
- The numerical key

./cryptodegree /Users/Mark/file.txt /Users/Mark/crypto.txt 28932