#include <stdio.h>

using namespace std;

int main(void)
{
  int unsigned number =3;

  printf("\npodaj liczbe\n");

  scanf("%d",&number);


  if(number<10)
    {
      printf("Liczba mniejsza niz 10\n");
    }
  else if(number>10)
    {
     printf("Liczba wieksza niz 10\n");
    }
  else
    {
       printf("Liczba jest 10\n");
    }
  
}
