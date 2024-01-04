#include <stddef.h>

void remove_every_other (size_t *length, int array[*length])
{ 
  size_t j = 0;
  for(size_t i=0; i<*length; i++) {
    if(i % 2 == 0) {
      array[j++] = array[i];
    }
  }
	*length = j;
}