#include <iostream>
using namespace std;

int main(){
  // Referensi https://www.w3schools.com/cpp

  // ini adalah comment (ini tidak akan dijalankan)
  // cout << "hello world";

  system("cls"); // untuk membersihkan terminal

  // 1. Variabel & tipe data
    // jenis tipe data
    // 1.integer(int) contoh 1
    // 2.float(float) contoh 5.99
    // 3.double(double) contoh 9.98
    // 4.character(char) contoh "A"
    // 5.boolean(bool) contoh true / false
    // 6.string(string) contoh "Karunia Raharjo"

  // int : tipe data, angka : nama variabel, 1 : isi variabel
  int angka = 17; 
  // Penulisan untuk variabel dg tipe data yang sama
  string nama = "Karunia Raharjo", alamat = "Batang";

  // ini output untuk menampilkan isi variabel
  cout << angka << " " << nama << " " << alamat;
}