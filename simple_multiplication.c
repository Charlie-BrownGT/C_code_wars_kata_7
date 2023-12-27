int simple_multiplication(int number) {
    
    int result = 0;

    if (number % 2 == 0){
        result = number * 8;
    }
    else {
        result = number * 9;
    }

    return result;

}