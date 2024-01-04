#include <string.h>

/* remember to null-terminate outp! */

char *get_middle(char outp[3], const char *inp)
{
    int length = strlen(inp);

    int half_length = length / 2;

    int test = length % 2;

    if(test == 0){
        
        outp[0] = inp[half_length - 1];
        outp[1] = inp[half_length];
        outp[2] = '\0';
        return outp;
    }
    if(test != 0){

        outp[0] = inp[half_length];
        outp[1] = '\0';
        return outp;
    }

}