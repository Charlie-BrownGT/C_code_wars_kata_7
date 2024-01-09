#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    int root = 0;

    root = sqrt(n);

    if(root * root == n){
        return true;
    }
    else {
        return false;
    }

}