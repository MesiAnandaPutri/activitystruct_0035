// activity3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs[3];
	for (int i = 0; 1 < 3; i++) {
		cout << "Data ke- " << (i + 1) << ":" << endl;
		cout << "Nomor Mahasiswa :";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa :";
		getline(cin, mhs[i].nama);

		cout << "Alamat Mahasiswa :" << endl;
		cout << "\t nama Desa : ";
		cin >> mhs[i].alamat.desa;
		cout << "\t nama kota :";
		cin >> mhs[i].alamat.kota;
		cout << "umur mahasiswa :";
		cin >> mhs[i].umur;

	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "Data Mahasiswa ke- " << (i + 1) << ":" << endl;
		cout << "\n NIM :" << mhs[i].nim;
		cout << "\n Nama :" << mhs[i].nama;
		cout << "\n Alamat :";
		cout << "\n Desa :" << mhs[i].alamat.desa;
		cout << "\n Kota :" << mhs[i].alamat.kota;
		cout << "\n Umur :" << mhs[i].umur;
	}
}