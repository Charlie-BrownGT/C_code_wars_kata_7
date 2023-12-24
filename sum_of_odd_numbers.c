#include <inttypes.h>

uint64_t rowSumOddNumbers(uint32_t n)
{
  uint64_t sum = 1;
  for (uint64_t i = 1; i < n; i++)
    sum += 2*i;
    
  uint64_t k = sum;
  for (uint64_t i = 1; i < n; i++)
  {
    k+=2;
    sum+=k;
  }

  return sum;
}