#include <iostream>

#include "pointer.h"

int main()
{
#pragma omp parallel for
  for (int i=0; i < 100; i++)
    {
      init_pointer(i);
      free_pointer();
    }

  return 0;
}

