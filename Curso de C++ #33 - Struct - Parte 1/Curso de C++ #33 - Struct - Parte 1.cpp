#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::string;


struct Carro
 {
  
  string nome;
  int pot;
  string cor;
  int velMax; 


 }; 


int main ()
{
    setlocale(LC_ALL, "portuguese");



  Carro car_1;
  cout<<"Qual e a potencia do carro: ";
  cin>>car_1.pot;
  cout<<"\n\n";
  
  cout<<"Entao, a potencia do carro e :"<<car_1. pot<<"\n\n";   

  cout<<"Qual e o nome do carro: "<<"\n\n";
  cin>>car_1.nome;

  cout<<" O nome do carro: "<<car_1.nome<<"\n\n";




 return 0;

} 
