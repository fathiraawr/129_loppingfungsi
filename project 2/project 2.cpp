#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2000, hAir = 300;
string nama;

void input()
{
	cout << "Masukkan Nama = ";
	cin >> nama;
	cout << "Jumlah  Telor = ";
	cin >> nTelor;
	cout << "Masukan Jumlah Mie = ";
	cin >> nMie;
	cout << "Masukan Jumlah Air Mineral";
	cin >> nAir;
}

int hitungHarga() {
	return (nTelor + hTelor) + (nMie + hMie) + (nAir + hAir);
}

void display(){
	cout << "Nama = " << nama << endl;
	cout << "Jumlah Telor = " << nTelor << endl;
	cout << "Jumlah Mie = " << nMie << endl;
	cout << "Jumlah Air = " << nAir << endl;
	cout << "Total Harga Rp." << hitungHarga() << endl;

	int main() {
		char p;
		do
		{
			char p;
			cout << "Apakah anda ingin mengulangi (y/t)";
			cin >> p;

		} while (p == 'y' || p == 'Y' );

		input();
		display();

		return 0;
	}




