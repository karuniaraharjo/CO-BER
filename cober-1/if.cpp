#include <iostream>
using namespace std;

int main(){
  // disini untuk menuliskan kode program
  //system("CLS");
  // 1.Harus ada variabel nilai
  int nilai;
  // int itu tipe data
  // nilai = nama variabel
  // 90 = value dari variabel

  cout << "Masukkan Nilai : ";
  cin >> nilai;

  if (nilai >= 90)
  {
    if (nilai > 100)
    {
      cout << "Kepinteren";
    }
    else
    {
      cout << "Grade A";
    }
    
  }
  else if (nilai >= 80 && nilai < 90)
  {
    cout << "Grade B";
  }
  else
  {
    cout << "Nilai tidak mendapatkan grade";
  }
  
}