#include<iostream>
#include<math.h>
using namespace std;
main()
{
      double a,n;
      cout<<"Program obliczjacy ilosc ruchow"<<endl;
      cout<<"potrzebnych do rozwi¹zania Wie¿y Hanoi"<<endl;
      cout<<"Podaj n, gdzie n to liczba kr¹¿ków"<<endl;
      cin>>n;
      if (n>0)
      {
              a=pow( 2,n )-1;
              cout<<"Trzeba wykonac "<<a<<" ruchow"<<endl;
      }
      else
      {
              cout<<"Nie ma takiej Wie¿y Hanoi"<<endl;
      }    
      cin.ignore();
      cin.get();
      return 0;
}
