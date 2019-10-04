#include <iostream>

using namespace std;

struct autko
{
      
      char marka[20];
      char model[20];
      int cena;
};


void Wprowadz( autko * samochodzik, int rozmiar)
{
  
  
  for( int i=0; i<=rozmiar; i++ )
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
void Wyswietl(autko * samochodzik, int rozmiar){
  
  fstream fs;
  fs.open ("test.txt", std::fstream::in | std::fstream::out, std::fstream::app);
  for( int i=0; i<=rozmiar; i++ )
    {
      
      cout<<"Oto dane samochodu "<<i+1<<endl;
      
      cout<<"Marka "<<endl;
      cout<<samochodzik[i].marka<<endl;
      cout<<"Model "<<endl;
      cout<<samochodzik[i].model<<endl;
      cout<<"Cena w tys zl "<<endl;
      cout<<samochodzik[i].cena<<endl;
      
      
      
      fs << samochodzik[i].marka<< samochodzik[i].model<< samochodzik[i].cena;
      
      
    }
  fs.close();
}
int main(void)
{
  int rozmiar;
  int liczba;
  
  cout<<"Podaj ile samochodow chcesz wpisac ";
  cin >> liczba;
  
  rozmiar=liczba-1;
  
  autko * samochodzik;
  samochodzik = new autko[rozmiar];
  
  
  Wprowadz(samochodzik,rozmiar);
  Wyswietl(samochodzik,rozmiar);
  
  delete samochodzik;
  return(0);
}

