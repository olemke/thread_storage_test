#include <iostream>

#include "pointer.h"

int main()
{
  init_pointer(1);
  free_pointer();

#pragma omp parallel for
  for (int i=0; i < 10; i++)
    {
      init_pointer(i);
      free_pointer();
    }

  return 0;
}

