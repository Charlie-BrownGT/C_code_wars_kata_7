//GG2EZ#MORTIKIY
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool validate_pin(const char *pin) {

  // Declaring length variable to loop through pin, and i for iterating.
  int length, i;
  
  // Collects array length of passed pointer.
  length = strlen(pin);
  
  // Checks only when pin is 4 or 6 characters.
  if (length == 6 || length == 4)
    {
      // Loops through pin to check each character.
      for (i = 0; i < length; i++)
        // Immediately returns false if any character is not a digit.
        if (!isdigit(pin[i]))
          return false;
        // Returns true if previous conditional didn't trigger.
        return true;
    }
  
  // Returns false if the pin is any size other than 4 or 6 characters long.
  return false;
}