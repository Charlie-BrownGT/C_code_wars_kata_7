//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
  char* stripped_string = malloc(strlen(str) + 1);
  char* vowels = "aeiouAEIOU";
  int str_pos = 0;
  
  for( ; *str; str++)
  {
      if(strchr(vowels, *str) == 0)
      {
        stripped_string[str_pos] = *str;
        str_pos++;
      }
  }
  stripped_string[str_pos] = 0;
  
  return stripped_string;
}