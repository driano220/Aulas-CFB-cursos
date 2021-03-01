#include<iostream>
#include<locale.h>
#include<string.h>

using std::cout;
using std::cin;
using std::string;


struct Carro
 {
  // são variáveis do struct carro.
  string nome; 
  int pot;
  string cor;
  int velMax; 


 }; 

 struct Console 
 {
    string nome_console;
    float preco;
    int ano_lancamento;
    int n_jogos;

 };


int main ()
{
  setlocale(LC_ALL, "portuguese");

  Console ps4; 

  Carro car_1;
  
  
  cout<<"Qual e a potencia do carro: ";
  cin>>car_1.pot;
  
  cout<<"\n\n";
  
  cout<<"Entao, a potencia do carro e :"<<car_1. pot<<"\n\n";   

  cout<<"Qual e o nome do carro: "<<"\n\n";
  cin>>car_1.nome;

  cout<<" O nome do carro: "<<car_1.nome<<"\n\n";

    cout<<"Digite o nome do console"<<"\n\n";
    cin>>ps4.nome_console;

    cout<<"Digite o valor do console";
    cin>>ps4.preco;

    cout<<"Nome do console e: "<<ps4.nome_console<<", e o preco e: "<<ps4.preco;





 return 0;

} 
