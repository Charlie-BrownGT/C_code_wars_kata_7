int min(int* array, int arrayLength)
{
    int minInt = array[0];
    for(int i = 1; i < arrayLength; i++)
    {
        if(array[i] < minInt) {
            minInt =  array[i];
        }
    }
    return minInt;
}

int max(int* array, int arrayLength)
{
    int maxInt = array[0];
    for(int i = 1; i < arrayLength; i++)
    {
        if(array[i] > maxInt) {
            maxInt =  array[i];
        }
    }
    return maxInt;
}