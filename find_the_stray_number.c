#include <stddef.h>

int stray(size_t n, int arr[n]) {

    int result = 0;

    if(arr[0] != arr[1] && arr[0] != arr[2]){
        return arr[0];
    }

    for(unsigned long i = 0; i < n; i++){
        if(arr[i] != arr[i + 1]){
            return arr[i + 1];
        }
    }
}