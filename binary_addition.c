char *binary_add (unsigned a, unsigned b, char *binary)
{
// write to the binary string and return it
  unsigned long sum = a;
  sum += b;
  int i = 0;
  if(sum == 0)
  {
    binary[i++] = '0';
  }
  for(; sum > 0; i++)
  {
    binary[i] = sum % 2 + '0';
    sum /= 2;
  }
  binary[i--] = '\0';
  for(int j = 0; j < i; j++)
  {
    char tmp = binary[j];
    binary[j] = binary[i];
    binary[i--] = tmp;
  }
	return binary;
}