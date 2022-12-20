#include <iostream>
#include <string>

void Province {
}
struct Country {
  std::string name;
  Provınce* capital; //burada * adresi deği lpoint ettiği değeri mi tutuyor?
};
struct Province {
  std::string name;
  Country* domain; 
  
};

int main() {
  

//  int* ptrr = &Country ;
  //int* ptr = &Province ;
  Country Türkiye;
  Türkiye.name = "Türkiye" ;
  Türkiye.capital ="Ankara" ;
  
  Province İstanbul;
  İstanbul.name = "İstanbul" ;
  //İstanbul.domain =*ptrr ;
  std::cout << İstanbul.domain ;
  
}

