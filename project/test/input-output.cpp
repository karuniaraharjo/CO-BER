#include <iostream>
#include <string>
using namespace std;

int main(){
  //bersihkan terminal
  system("cls");

  //buat variabel untuk menampung input
  char nama[100];

  //output untuk intruksi
  cout << "Masukkan nama : ";

  //input nama
  cin.get(nama,100);

  //Tampilkan inputan
  cout << "Hai " << nama;

  //tes
  char n[100], a[100];
  int u;

  cout << "Siapa nama kamu ? ";
  cin >> n;
  cout << "Hai " << n << " berapa umurmu ? ";
  cin >> u;
  cout << "Hai " << n << " dimana alamatmu ? ";
  cin >> a;
  cout << "\nPerkenalkan nama saya " << n << "\nUmur saya " << u << " tahun";
  cout << "\nSaya tinggal di " << a;
}