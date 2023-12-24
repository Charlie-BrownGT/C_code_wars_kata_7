#include <stdbool.h>


bool IsIsogram(char *str) 
{
  bool result = true;
  
  for (int i = 0; str[i]; i++) 
  {
    for (int k = 0 ; str[k]; k++)
    {
      if (i != k && tolower(str[i]) == tolower(str[k])) {
        result = false;
      }
    }
  }
  return result;
}