int find_difference(const int a[3], const int b[3]) {

    int vol_a = a[0] * a[1] * a[2];
    int vol_b = b[0] * b[1] * b[2];

    int difference = vol_a - vol_b;

    if(difference < 0){
        difference = difference - (2 * difference);
    }

    return difference;
}