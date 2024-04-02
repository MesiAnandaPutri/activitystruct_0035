// struct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    
