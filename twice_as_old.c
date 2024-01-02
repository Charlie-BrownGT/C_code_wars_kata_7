int twice_as_old (int father_age, int son_age)
{
  int result = 0;
  
  int x = father_age;
  int y = son_age;
  
  if (father_age == 2 * son_age){
    return result; 
  }
  else if (father_age < 2 * son_age){
    while(father_age < 2 * son_age){
      father_age--;
      son_age--;
      result++;
    }
    return result;
  }
  else if (father_age > 2 * son_age){
    while(father_age > 2 * son_age){
      father_age++;
      son_age++;
      result++;
    }
    return result;
  }
  
}