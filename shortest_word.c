#include <sys/types.h>
#include <string.h>
#include <ctype.h>

ssize_t find_short(const char *s)
{
    int min, length;
    min = length = strlen(s);
    int temp = 0;
    
    for(int i=0; i <= length; i++){
        if(isspace(s[i]) || (s[i] == '\0') ){
            if(temp < min) min = temp;
            temp = 0;
        }
        else temp++;
    }
    return min;
}