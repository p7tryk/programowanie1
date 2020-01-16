#include <stdio.h>
#include <stdlib.h>
#include "gracz.h"
bool istnieje(const int liczbagraczy,const int n)
{
  if(n>liczbagraczy)
    {
      printf("nie ma takiego gracza\n");
      return false;
    }
  else
    return true;
}


int main()
{
  bool status = true;
  int liczbagraczy=0;
  gracz *listagraczy;
  while(true)
    {
      int mode=0;
      int n=0;
      printf("wybierz opcje\n1 utworz graczy\n2 usun graczy\n3 przesun w gore\n4 przesun w dol\n5 pokaz pozycje\n6 przysun wszystkich w gore\n9 wypisz wszyskich\n10 koniec");
      scanf("%d",&mode);
      switch(mode)
	{
	case 1:
	  printf("podaj liczbe graczy\n");
	  scanf("%d",&liczbagraczy);
	  listagraczy = new gracz[liczbagraczy];
	  break;
	case 2:
	  delete[] listagraczy;
	  liczbagraczy=0;
	  break;
	case 3:
	  printf("wybierz gracza do przesuniecia od 1 do %d\n",liczbagraczy);
	  scanf("%d",&n);
	  if(istnieje(liczbagraczy,n))
	    {
	      listagraczy[n].idz_gora();
	    }
	  break;
	case 5:
	  printf("wybierz gracza do wyswietlenia od 1 do %d\n",liczbagraczy);
	  scanf("%d",&n);
	  if(istnieje(liczbagraczy,n))
	    {
	      listagraczy[n].status();
	    }
	  break;
	case 6:
	  printf("o ile przesunac wszystkich\n");
	  scanf("%d",&n);
	  for(int i=0;i<liczbagraczy;i++)
	    {
	      listagraczy[i].idz_gora(n);
	    }
	  break;
	case 9:
	  for(int i=0;i<liczbagraczy;i++)
	    {
	      printf("gracz %d ",i);
	      listagraczy[i].status();
	    }
	  break;
	case 10:
	  delete[] listagraczy;
	  return false;
	default:
	  break;
	}
      
    }

}
