class gracz
{
 private:
  int position;
  int punkty;
  int zycia;

 public:
  gracz();
  void idz_gora();
  void idz_gora(int kroki);
  void idz_dol();

  void update();
  void status();
  
};
gracz::gracz()
{
  position=0;
  zycia=7;
  update();
}
void gracz::update()
{
  if(position>80)
    position=80;
  punkty=position*10;
}
void gracz::idz_gora()
{
  int kroki=0;
  printf("podaj liczba krokow w gore\n");
  scanf("%d",&kroki);
  position+=kroki;
  update();
}
void gracz::idz_gora(int kroki)
{
  position+=kroki;
  update();
}
void gracz::status()
{
  update();
  printf("pozycja %d, punkty %d, zycia %d\n",position,punkty,zycia);
}


