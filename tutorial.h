class convert
{
 private:
  int number;
 public:
  bool inputhex(char * string);
  bool inputdec(char * string);
  bool inputbin(char * string);

  void printhex();
  void printdec();
  void printbin();

  //void input();
  //bool output();

  bool superinput();
};

bool convert::superinput()
{
  char string[100];
  int mode = 0;
  printf("input\npodaj tryb\n1 hexnadec\n2 cokolwiek\n3 cokolwiek\n7 exit");
  scanf("%d",&mode); //input numer czego chcemy
  
  if(mode==7) //jezeli 7 to zwracamy false i konczymy petle
    return false;
  
  printf("podaj liczbe\n");
  scanf("%s", string); //wpisujemy ten ciag znakow np fffa
  
  //printf("mode %d, string=%s\n",mode,string);
  
  switch(mode)
    {
    case 1:
      inputhex(string);
      printdec();
      break;
    case 2:
      //inputdec(string);
      //printbin();
    default:
      return true;
    }
  return true;
}

/*
void convert::input()
{
  char string[100];
  int mode = 0;
  printf("input\npodaj tryb\n1 hex\n2 dec\n3 bin\n");
  scanf("%d",&mode);
  printf("podaj liczbe\n");
  scanf("%s", string);
  printf("mode %d, string=%s\n",mode,string);
  switch(mode)
    {
    case 1:
      inputhex(string);
      //printdec(); //jak chcesz odrazu zrobic hexnadec na przyklad
    default:
      break;
    }
}

bool convert::output()
{
  int mode = 0;
  printf("output\npodaj tryb\n1 hex\n2 dec\n3 bin\n4 exit");
  scanf("%d",&mode);
  printf("mode %d\n",mode);
  switch(mode)
    {
    case 2:
      printdec();
      break;
    case 4:
      return false;
    default:
      return true;
    }
}
*/
bool convert::inputhex(char * string)
{
  number = strtol(string, NULL, 16);
}
void convert::printdec()
{
  printf("liczba to %d\n",number);
}

