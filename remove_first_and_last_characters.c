 int ft_strlen(const char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
    i++;
  return(i);
}

char *remove_char(char* dst, const char* src)
{
  int i;
  int j;
  int len;

  i = 1;
  j = 0;
  len = ft_strlen(src);
  len = len - 1;
  while (i < len)
  {
     dst[j] = src[i];
     j++;
     i++;
  }
  dst[j] = '\0';
  return (dst);
}