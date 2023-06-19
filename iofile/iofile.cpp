#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;

	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	// Unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);

		// loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;

		// menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl; 
		
	}

	// selesai dalam menulis, sekarang tutup filenya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("contohfile.txt");
	cout << endl << ">= membuka dan membaca file" << endl;

	//jika file tidak ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan disini
			cout << baris << '\n';
		}
	}
}