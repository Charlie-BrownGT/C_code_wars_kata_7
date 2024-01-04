#include <stdio.h>
#include <math.h>

long int findNextSquare(long int sq)
{
    long int root = 0;

    root = sqrt(sq);

    if(root * root != sq){
        return -1;
    }

    long int new_factor = root + 1;
    long int new_square = new_factor * new_factor;

    return new_square; 
}