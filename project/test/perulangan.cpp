#include <iostream>
using namespace std;

int main(){
  // for (int i = 1; i <= 1000; i++)
  // {
  //   cout << i << "\n";
  // }
  
  string status = "n";
  while (status != "Y") // != artinya tidak sama dengan
  {
    cout << "Apakah kamu mau jadi pacarku ? (Y/N) : ";
    cin >> status;
  }
  
  cout << "Selamat kamu menjadi pacarku";

  // string capek = "N";
  // do
  // {
  //   cout << "Apakah kamu capek? (Y/N) : ";
  //   cin >> capek;
  // } while (capek != "Y" && capek != "y");

  // cout << "Istirahat ya sayang!! Jaga kesehatanmu";
}