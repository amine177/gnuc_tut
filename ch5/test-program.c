#include <stdio.h>
#include <stdlib.h>


int main()
{
  extern int external_var;
  extern void external_function();

  external_var = 5;
  external_function();
  exit(0);
}
