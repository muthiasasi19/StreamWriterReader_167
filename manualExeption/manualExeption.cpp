#include <iostream>
using namespace std;
int main()
{
	try {
		cout << "Selamat belqajar di prodi TI UMY" << endl;
		throw 0.5; // melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;

	}
}