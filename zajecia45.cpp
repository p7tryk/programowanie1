#include <iostream>
#include <stdio.h>
#include <unistd.h> // linux/unix only
#include <cmath>

using namespace std;

class car
{
public:
  car(void)
  {
    printf("\nbuduje samochod\n");
    

  }
  car(int cena_m)
  {
    cena = cena_m;
    aktualna_wartosc = cena;
    
    
    printf("\nbuduje go tylko za pieniadze\n za tyle %d (tys. zl)\n", cena);

  }
  ~car(void)
  {
    printf("\n twoj zamochod zostal zezlomowany\n");

  }
  void priceAfter(int year)
  {
    aktualna_wartosc = calculatePrice(year);

    printf("\nWartosc po %d latach jest %d tys. zl\n",year,aktualna_wartosc);
    
  }

private:
  int cena;
  int aktualna_wartosc;

  
  
  int calculatePrice(int year)
  {
    //  printf("%d = age", age);
    /*
    switch(year)
      {
      case 1:
	aktualna_wartosc = cena * 0.85;
	break;
      case 4:
	aktualna_wartosc = cena * 0.55;
	break;
      default:
	aktualna_wartosc = 0;
	break;
      }
    */
    
    alktualna_wartosc = cena * pow(year+0.5,-0.4);
    return(aktualna_wartosc);
    
  }
  
  
};


int main()
{
  car mycar(85);

  mycar.priceAfter(1);
  mycar.priceAfter(4);
  mycar.priceAfter(15);
  
  sleep(3); //linux only
  
  return 0;
}
