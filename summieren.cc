#include <fstream>
#include <iostream>

int main() {
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  for(int i=0;i<234;i++) {
    int num1;
    int num2;
    fin >> num1;
    fin >> num2;
    int sum = num1 + num2;
    fout << sum << std::endl;
    //std::cout << sum << std::endl;  
  }
  fin.close();
  fout.close();
}