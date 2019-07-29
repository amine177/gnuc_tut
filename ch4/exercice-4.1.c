#include <stdio.h>
#include <stdlib.h>


int mull(int, int);

int main(int argc, char** argv)
{
  int a, b;

  if (argc < 3) {
    printf("usage:\nprogram a b\n");
    exit(1);
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("%d * %d = %d\n", a, b, mull(a, b));
  exit(0);
}


int mull(int a, int b)
{
  return a * b;
}
