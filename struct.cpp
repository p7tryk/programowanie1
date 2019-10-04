#include <stdio.h>

using namespace std;

struct person
{
  char first_name[20];
  char last_name[20];
  int age;
};


int main(void)
{
  person guest_1 =
    {
      "Gloria",
      "Gaynor",
      67
    };
  person guest_2 =
    {
      "Tom",
      "Wilcox",
      67
    };

    person guest_3 =
    {
      "Wojtek",
      "Ziomek",
      22
    };

    printf("\nGosc 1 --> Imie: ");
    printf(guest_1.first_name);
    printf(",Nazwisko: ");
    printf(guest_1.last_name);

    printf("\nGosc 2 --> Imie: ");
    printf(guest_2.first_name);
    printf(",Nazwisko: ");
    printf(guest_2.last_name);

    printf("\nGosc 3 --> Imie: ");
    printf(guest_3.first_name);
    printf(",Nazwisko: ");
    printf(guest_3.last_name);

    printf("\n suma wieku: %d \n", guest_1.age + guest_2.age + guest_3.age);

    return 0;
  
}
