#include <stdio.h>

int main()
{

  using namespace std;

  int updates = 6;

  int *p_updates = NULL;

  printf("%d", *p_updates);
  
  p_updates = &updates;

  printf("wartosci updates = %d, *p_updates = %d\n", updates, *p_updates);


  printf("Adresy: &updates = %d, p_updates = %d\n", &updates, p_updates);

  *p_updates = *p_updates + 1;

  printf("teraz wartosci updates = %d, *p_updates = %d\n", updates, *p_updates);

  return 0;
}
