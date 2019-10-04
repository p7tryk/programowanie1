#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{

  
  char* c_ptr = NULL;
  short int* si_ptr = NULL;
  int* i_ptr=NULL;
  long int* li_ptr=NULL;

  printf("%d, %d, %d, %d\n", sizeof(char), sizeof(short int), sizeof(int), sizeof(long int));
  
  c_ptr = new (char);
  si_ptr = new (short int);
  i_ptr = new (int);
  li_ptr = new (long int);

  printf("wzkazniki przed inkrementacja: c_ptr = %p, si_ptr=%p, i_ptr=%p, li_ptr=%p\n",c_ptr, si_ptr, i_ptr, li_ptr);

  c_ptr= c_ptr+34;
  si_ptr++;
  i_ptr++;
  li_ptr++;

  printf("wzkazniki przed inkrementacja: c_ptr = %p, si_ptr=%p, i_ptr=%p, li_ptr=%p\n",c_ptr, si_ptr, i_ptr, li_ptr);  


}
