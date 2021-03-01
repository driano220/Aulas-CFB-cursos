#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::string;


struct Carro
 {
  
  string nome;
  int pot= 1000;
  string cor;
  int velMax; 


 }; 


int main ()
{
    setlocale(LC_ALL, "portuguese");



  Carro car_1;
  
  cout<<"A potencia do carro e :"<<car_1. pot;   


 return 0;

} 
