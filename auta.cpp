#include <iostream>

using namespace std;

struct autko
    {

char marka[20];
char model[20];
int cena;
    };
int liczba;
int rozmiar;
int i;


autko * samochodzik;
void Wprowadz(){

        cout<<"Podaj ile samochodow chcesz wpisac ";
        cin >> liczba;

        rozmiar=liczba-1;


         samochodzik = new autko[rozmiar];
for( i=0; i<=rozmiar; i++ )
{

        cout<<"Dane ";
        cout<<i+1;
        cout<<" samochodu "<<endl;
        cout<<"Wpisz marke samochodu ";
        cin>>samochodzik[i].marka;

        cout<<"Wpisz model samochodu "<<endl;
        cin>>samochodzik[i].model;

        cout<<"Wpisz cene samochodu w tys zl "<<endl;
 		cin >> samochodzik[i].cena;
}
}
void Wyswietl(){
for( i=0; i<=rozmiar; i++ )
{

cout<<"Oto dane samochodu "<<i+1<<endl;

cout<<"Marka "<<endl;
cout<<samochodzik[i].marka<<endl;
cout<<"Model "<<endl;
cout<<samochodzik[i].model<<endl;
cout<<"Cena w tys zl "<<endl;
cout<<samochodzik[i].cena<<endl;
}
}
 int main(void)
    {
 Wprowadz();
 Wyswietl();

        delete samochodzik;
        return(0);
    }
