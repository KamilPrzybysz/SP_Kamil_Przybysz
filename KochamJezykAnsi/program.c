#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
        int liczba1,liczba2,wynik;
        cout<<"\n Wprowadz pierwsza liczbe calkowita\n ";
        cin>>liczba1;
        cout<<"\n Wprowadz druga liczbe calkowita\n ";
        cin>>liczba2;
        wynik=liczba1+liczba2;
        cout<<"\n Suma wynosi: "<<liczba1<<" + "<<liczba2<<" = "<<wynik<<endl;
        wynik=liczba1-liczba2;
        cout<<"\n Roznica wynosi: "<<liczba1<<" - "<<liczba2<<" = "<<wynik<<endl;
        wynik=liczba1*liczba2;
        cout<<"\n Iloczyn wynosi: "<<liczba1<<" * "<<liczba2<<" = "<<wynik<<endl;
        wynik=liczba1/liczba2;
        cout<<"\n Iloraz wynosi: "<<liczba1<<" : "<<liczba2<<" = "<<wynik<<endl;
        getch();
        return 0;
}

