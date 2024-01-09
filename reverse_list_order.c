#include <stdlib.h>
#include <stddef.h>

int *reverse_list(const int *array, size_t length) {
  
    int * newArray = malloc(length * sizeof(int));  
    int i;
    for (i = 0; i < length; i++)
      newArray[i] = array[length - 1 - i];
      
    return newArray;
}