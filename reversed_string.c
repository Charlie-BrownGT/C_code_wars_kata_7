#include <stdio.h>
#include <string.h>

char *strrev (char *string)
{
    int length = strlen(string);
    int start = 0;
    int end = length - 1;

    while (start < end){

        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;

        start++;
        end--;
    }
return string;
}