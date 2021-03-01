#include<iostream>
#include<locale.h>
#include<string.h>

using std::cout;
using std::cin;
using std::string;


struct Console
 {
  // são variáveis do struct console.
  string nome; 
  float preco;
  int ano;
  int seculo; 

  void insere_carc(string st_nome, float st_preco, int st_ano, int st_seculo) // método da função é insere_carc //TODA FUNÇÃO PARA UM STRUCT DEVE ESTAR DENTRO DO STRUCT
  {
     nome=st_nome;
     preco=st_preco;
     ano=st_ano;
     seculo=st_seculo;


  }
  
    void mostra ()  // método da função é "mostra"
   {
      cout<<"\n\nNome ______________:"<<nome;
      //cout<<"\n\nPreco ______________:"<<preco;
      cout<<"\n\nano ______________:"<<ano;
     // cout<<"\n\nseculo ______________:"<<seculo;


   }
  
 }; 

  
;

int main ()
{
  setlocale(LC_ALL, "portuguese");

  
  
  










  struct Console tipo[2]; //FORMA DE INSERIR ARRAY NA STRUCT
  
 for( int i=0; i<2; i++)
 {
    cout<<" Qual o nome ?\n";
    cin>>tipo[i].nome;
    //cout<<" Qual o preco ?\n";
    //cin>>tipo[i].preco;
    cout<<" Qual o ano ?\n";
    cin>>tipo[i].ano;
    //cout<<" Qual o seculo ?\n";
    //cin>>tipo[i].seculo;

 }

for( int j=0; j<2; j++)
 {
  tipo[j].mostra();

  
 }
 
cout<<"\n\n";
   
   string nomes;
   cout<<"Digite um nome de console :";
   cin>>nomes;
   
   for( int i=0; i<2; i++) 
   if(nomes == tipo[i].nome)
   {
    cout<< tipo[i].nome;
    cout<<tipo[i].ano;


      
   }


    





 return 0;

} 

