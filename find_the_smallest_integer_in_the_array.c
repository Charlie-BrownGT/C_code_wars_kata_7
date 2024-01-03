#include <stddef.h>

int find_smallest_int(const int array[/* len */], size_t len)
{
    int i = 0;
    int result = array[0];

    while(i < len){
        
        if(result > array[i]){
            
            result = array[i];
        }
        
        i++;
    }
    
    return result;
}