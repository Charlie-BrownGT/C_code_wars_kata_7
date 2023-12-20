#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
  
  int i = 0;
  int total = 0;

  if (v == 0){
    return "even";
  }

  for (int i = 0; i < sz; i++){
    total = total + v[i];
  }

  if (total % 2 == 0){
    return "even";
  }
  else if(total % 2 != 0){
    return "odd";
  }
}