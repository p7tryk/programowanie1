#include <iostream>

using namespace std;

struct gosc
{
  char imie [20];
  char nazwisko [20];
  int wiek;
  
};




void pobierz(gosc*tab,int rozmiar)
{
  
  for (int i=0; i<rozmiar; i++)
    {
      cout<<"prosze podac imie goscia: "<<endl;
      cin>>tab[i].imie;
      cout<<"prosze podac nazwisko goscia: "<<endl;
      cin>>tab[i].nazwisko;
      cout<<"prosze podac wiek goscia; "<<endl;
      cin>>tab[i].wiek;
    }
  
}

void wypisz(gosc*tab, int rozmiar)
{
  for (int i=0; i<rozmiar; i++)  
    {
      
      cout<<"dane " <<i+1<<"goscia" <<endl;
      cout<<"imie ";
      cout<<tab[i].imie;
      cout<<"nazwisko ";
      cout<<tab[i].nazwisko<<endl;
      cout<<"wiek ";
      cout<<tab[i].wiek<<endl;
    }
  
}

int main()  
{
    
    int rozmiar;
    cout<<"prosze wpisac ilosc gosci "<<endl;
    cin>>rozmiar;
    
    gosc*tab;
    tab=new gosc[rozmiar];
    
    pobierz(tab,rozmiar);
    wypisz(tab,rozmiar);

    delete [] tab;
    return 0;
    
};
