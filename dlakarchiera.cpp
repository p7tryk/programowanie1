#include <stdio.h>
#include <stdlib.h>
#include "tutorial.h"

int main()
{
  bool status=1;
  convert converting;
  /*
  while(status)
    {
      converting.input();
      status = converting.output();
    }
  */
  while(status)
    {
      status = converting.superinput();
    }
  
  return 0;
}
