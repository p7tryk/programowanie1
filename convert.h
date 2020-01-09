#include <stdlib.h>
#include <stdio.h>
#pragma once

class convert
{
 private:
  int number = 0;


 public:
  void phex();
  void pdec();
  void poct();
  void set();
};

void convert::pdec()
{
  printf("%d\n",number);
}
void convert::phex()
{
   printf("0x%x\n", number);
}
void convert::poct()
{
  printf("0o%o\n",number);
}
void convert::set()
{
  char string[256];
  printf("wpisz dec 132\nhex 0xffa\n");
  scanf("%s", string);
  if(string[1]=='x')
    {
      sscanf(string,"%x",&number);
    }
  else if(string[1]=='b')
    {
      sscanf(string,"%i", &number);
    }
  else
    {
      sscanf(string,"%d",&number);
    }
}
