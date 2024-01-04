int summation(int num) {
    int i = 1;
    int summation = 0;

    while(i <= num){
        summation = summation + i;
        i++;
    }

    return summation;
}