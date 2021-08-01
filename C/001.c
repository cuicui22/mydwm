#include <stdio.h>

int main()
{
  int a;
  char b;
  float c;
  double d;

  a = 520;
  b = 'F';
  c = 3.14;
  d = 3.141592653;

  printf("%d1314\n", a);
  printf("I LOVE %cishC.com!\n", b);
  printf("圆周率是: %.2f\n", c);
  printf("圆周率精确点是：%11.9f\n", d);

  return 0;
}
