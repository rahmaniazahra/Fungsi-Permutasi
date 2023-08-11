#include <cstdlib>
#include <iostream>
using namespace std;

int Permutasi (int x, int y) {
  int Nilai_Permut, selisih;
  int faktorial = 1;
  selisih = x - y;
  
  while (x > 0) {
  faktorial = faktorial * x;
  x = x-1;
  }
    Nilai_Permut = faktorial/selisih;
    return(Nilai_Permut);
}

int main () {
  int n, r;
  cout << "Masukkan Nilai n: ";
  cin >> n;
  while (n < 0) {
  cout << "Masukkan Nilai N Kembali: ";
  cin >> n;
  }
  cout << "Masukkan Nilai r: ";
  cin >> r;
  while (r < 0) {
  cout << "Masukkan Nilai r Kembali: ";
  cin >> r;
  }
  
  cout << "Nilai Permutasi " << r << " dari " << n <<
//adalah " << Permutasi(n, r) << endl"; 

  system ("PAUSE");
  return(0);
}
