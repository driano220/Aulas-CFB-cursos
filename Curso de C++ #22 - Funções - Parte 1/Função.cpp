#include<iostream>

using std::cout;
using std::cin;

void texto();
void soma (int n1, int n2);

int main ()
{

    soma(15,5);
    texto();
    return 0;
  
}

void texto()
{

 cout<<"Adriano Martins "<<"\n";
 cout<<"Adriano Tatiana "<<"\n";


}

void soma (int n1, int n2)
{
 cout<<"Soma dos valores: "<<n1+n2<<"\n";


}