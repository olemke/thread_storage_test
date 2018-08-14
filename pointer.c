#include <stdio.h>
#include <stdlib.h>

#include "pointer.h"


#ifndef NOTHREAD
__thread int *mypointer = NULL;
#else
int *mypointer = NULL;
#endif

void init_pointer(int x)
{
  printf("Old pointer: %p\n", mypointer);
  mypointer = (int *)malloc(sizeof(int));
  *mypointer = x;

  printf("New pointer: %p (%i)\n", mypointer, *mypointer);
}

void free_pointer()
{
  printf("Free pointer: %p (%i)\n", mypointer, *mypointer);
  if (mypointer)
    free(mypointer);

  mypointer = NULL;
}

