#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i;
  short s;
  char c;
  long l;
  long long ll;
  long int li;

  printf("short is %d bytes\n", sizeof(s));
  printf("char is %d bytes\n", sizeof(c));
  printf("int is %d bytes\n", sizeof(i));
  printf("long is %d bytes\n", sizeof(l));
  printf("long long is %d bytes\n", sizeof(ll));
  printf("long int is %d bytes\n", sizeof(li));

  exit(0);
}
