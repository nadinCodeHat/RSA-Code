#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//Two Prime Numbers
	double x = 73 , y = 97;
	double n = x * y;

	//Totient function (phi)
	double phi = (x - 1) * (y - 1);

	//e value co-prime of phi such that 1 < e < phi(n)
	//public key
	double encrypt = 67;

	//Calculate d such that e.d = 1 mod phi(n)
	//pair (n,d) makes up the private key
	//private key
	double decrypt = fmod(1 / encrypt, phi);
	
	//Plain Text
	double message = 346;

	//Encrypt the message
	double encrypted_message = pow(message, encrypt);

	//Decrypt the message
	double decryped_message = pow(encrypted_message, decrypt);

	encrypted_message = fmod(encrypted_message, n);
	decryped_message = fmod(decryped_message, n);

	cout << "Plain Text: " << message<<"\n";
	cout << "Encrypted Text: " << encrypted_message << "\n";
	cout << "Decrypted Text: " << decryped_message;

	return 0;
}