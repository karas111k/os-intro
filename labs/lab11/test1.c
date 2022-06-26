#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Введите число: ");
  int a;
  scanf("%d",&a);
  if (a<0) exit(0);
  if (a>0) exit(1);
  if (a==0) exit(2);
  return 0;
}
