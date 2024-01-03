int quarter_of(int month) {

    int result = 0;

    if(month <= 3){
        result = 1;
    }
    else if (month <= 6){
        result = 2;
    }
    else if (month <= 9){
        result = 3;
    }
    else if (month <= 12){
        result = 4;
    }

    return result;
}