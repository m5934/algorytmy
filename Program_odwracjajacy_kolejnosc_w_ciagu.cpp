#include<iostream>
using namespace std;
main()
{
    int n, a, b, c, x, y, z;
    int tab[100];
    int tab1[100];
    int tab2[100];
    int tab3[100];
    x=0;
    c=0;
	cout<<"Program ktory wyznacza wszystkie trojki kolejnych liczb ci¹gu o tej wlasnoœci; "<<endl;
	cout<<"ze liczba pierwsza jest parzysta; liczba druga nieparzysta; a liczba trzecia "<<endl;
	cout<<"jest sum¹ dwoch pierwszych "<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Program obsluguje ciag do 100 wyrazow."<<endl;
    cout<<endl;
    cout<<"Podaj liczbe wyrazow jaki ma ciag; ktory chcesz podac."<<endl;
    cout<<endl;
    cout<<"UWAGA: liczba ktora podasz musi byc nie mniejsza od 1 i"<<endl;
    cout<<"nie wieksza od 100."<<endl;
    cout<<endl;
    cout<<"UWAGA: program obsluguje wyrazy tylko w "<<endl;
    cout<<"postaci liczby calkowitej."<<endl;
    cout<<endl;
    cout<<"Liczba n elementow: ";
    cin>>n;    
    while(n<=0 || n>100)
    {
        cout<<"Niepoprawne dane."<<endl;
        cout<<"Wpisz liczbe jeszcze raz."<<endl;
        cout<<endl;
        cout<<"Liczba n elementow: ";
        cin.ignore(n);
        cout<<n;
    }
    cout<<endl;
    cout<<"Podaj poszczegolne wyrazy n-elementowego ciagu."<<endl;
    cout<<endl;
    for(a=0; a<=n-1; a++)
    {
        cout<<"Wyraz "<<a+1<<": ";
        cin>>tab[a];
        cout<<endl;
    }
	for((a=0; x=0; y=0); a<=n-1; (a++; x++; y++))
	{
		if(tab[a]/2==0)
		{
			tab1[x]=tab[a];
		}
		else
		{
			tab2[x]=tab[a];
		}
	}
	a=0;
	for((z=0;x=0; y=0) ;x<=n-1; (x++; y++; z++))
	{
		if(x=y)
		{
			tab3[z]=tab1[x]+tab2[y];
			a=1;
		}
	}
	if(a>0)
	{
		cout<<"Trojki liczb spelniajace warunki to: "<<endl;
		for(b=0; b<=n-1; b=++)
		{
			cout<<"( "<<tab1[b]<<"; "<<tab2[b]<<"; "<<tab3[b]<<" )"<<endl;
		}
	}
	else
	{
		cout<<"Zadna z trojek liczb nie spelnia warunkow."<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}

