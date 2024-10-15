#include <iostream>
using namespace std;

int main(){
  // int nilai;

  // cout << "Masukkan nilai : ";
  // cin >> nilai;

  // if (nilai >= 90)
  // {
  //   cout << "Grade A";
  // }
  // else if(nilai >= 80 && nilai < 90)
  // {
  //   cout << "Grade B";
  // }
  // else if(nilai >= 70 && nilai < 80)
  // {
  //   cout << "Grade C";
  // }
  // else if(nilai >= 60 && nilai < 70)
  // {
  //   cout << "Grade D";
  // }
  // else
  // {
  //   cout << "Grade E";
  // }

  int h;
  cout << "Masukkan hari (1-7) : ";
  cin >> h;

  switch (h)
  {
  case 1:
    cout << "Senin";
    break;
  case 2:
    cout << "Selasa";
    break;
  case 3:
    cout << "Rabu";
    break;
  case 4:
    cout << "Kamis";
    break;
  case 5:
    cout << "Jumat";
    break;
  case 6:
    cout << "Sabtu";
    break;
  case 7:
    cout << "Minggu";
    break;
  default:
    cout << "Invalid Input";
    break;
  }
}