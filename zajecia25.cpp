#include <stdio.h>
#include <iostream>


using namespace std;

struct car
{
  char name[20];
  char model[20];
  int price;
};


int main(void)
{
  car car1 ={};

  car car2 = {};

  car car3 = {};

  

  printf("wpisz marke\n");
  scanf("%s",&car1.name);

  printf("wpisz model\n");
  scanf("%s",&car1.model);

  printf("wpisz cene\n");
  cin >> car1.price;
  

  printf("wpisz marke\n");
  scanf("%s",&car2.name);

  printf("wpisz model\n");
  scanf("%s",&car2.model);

  printf("wpisz cene\n");
  cin >> car2.price;
  

  printf("wpisz marke\n");
  scanf("%s",&car3.name);

  printf("wpisz model\n");
  scanf("%s",&car3.model);

  printf("wpisz cene\n");
  cin >> car3.price;


  printf("%s\n",car1.name);
  printf("%s\n",car1.model);
  printf("%d000zl\n",car1.price);
  
  
  printf("%s\n",car2.name);
  printf("%s\n",car2.model);
  printf("%d000zl\n",car2.price);
  
  printf("%s\n",car3.name);
  printf("%s\n",car3.model);
  printf("%d000zl\n",car3.price);
 

  return 0;
  
}

