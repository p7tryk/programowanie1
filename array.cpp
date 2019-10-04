#include <stdio.h>

using namespace std;

int main(void)
{
  int i=0;

  int my_table[5] = {1,2,3,4,5};

  printf("\n");

  for(i=0; i<5;i++)
    {
      printf("indeks tablicy: %d Watrosz pod indeksem tablicy: %d\n", i, my_table[i]);
    }
    
  return 0;
  
}
