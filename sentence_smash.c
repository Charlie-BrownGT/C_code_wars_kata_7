#include <string.h>

char *smash(const char **words, size_t count)
{
  //
  // Determine the total number of characters in the words
  //
  int letterCount = 0;
  for (int x = 0; x < count; x++){
    char* word = words[x];
    letterCount += strlen(word);
  }
  
  //
  // Total chars is total letter count + word-count - 1
  //
  
  int responseLength = letterCount + count;
  char* response = malloc(responseLength * sizeof(char));
  
  //
  // Write the result.
  //
  for (int x = 0, r = 0; x < count; x++){
    char* word = words[x];
    int wordLength = strlen(word);
    for (int y = 0; y < wordLength; y++, r++){
      response[r] = word[y];
    }
    response[r++] = ' ';
  }
  
  response[responseLength - 1] = '\0';
  
  return response;
}