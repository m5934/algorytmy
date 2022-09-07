#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
main()
{
       int a, b, c;
       cout<<"Program sprawdza,"<<endl;
       cout<<"czy boki a, b, c tworza trojkat prostokatny."<<endl;
       cout<<"Podaj bok a: "<<endl;
       cin>>a;
       cout<<"Podaj bok b: " <<endl;
       cin>>b;
       cout<<"Podaj bok c: "<<endl;
       cin>>c;
       if ((a*a+b*b) == (c*c))
       {
                     cout<<"Boki a = " << a << ", b= " << b << " i c = " << c <<endl;
                     cout<<" tworza trojkat prostokatny."<<endl;
       }
       else
       {
                     cout<<"Boki a = " << a << ", b = " << b << " i c = " << c <<endl;
                     cout<<" nie tworza trojkata prostokatnego"<<endl;
       }
       getch();
}
