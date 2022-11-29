#include <iostream>
#include <string>


struct Country {
  std::string name;
  std::string capital; 
};
struct Province {
  std::string name;
  std::string domain; 
  
};

int main() {
  void Province ;
  void Country ;
  int* ptrr = &Country ;
  int* ptr = &Province ;
  Country Türkiye;
  Türkiye.name = "Türkiye" ;
  Türkiye.capital =*ptr // değiştir
  
  Province İstanbul;
  İstanbul.name = "İstanbul" ;
  İstanbul.domain =*ptrr ;
  std::cout << İstanbul.domain ;
  
}

