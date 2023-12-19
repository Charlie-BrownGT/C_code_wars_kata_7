int get_sum(int a , int b) {
    
int i = 0;
int j = 0;
int sum = 0;

    if ( a == b){
        return a;
    }
    else if(a < b){
        i = a;
        j = b;
    }
    else if (a > b){
        i = b;
        j = a;
    }

while (i <= j){

    sum = sum + i;
    i++;
}
    
return sum;

}