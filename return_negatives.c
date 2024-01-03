int makeNegative(int num)
{
  int result = 0;

  if(num <= 0){
    return num;
  }
  else if(num >= 0){
    result = num - ((2 * num) + 1);
  return result;
  }
}