/* d - the days to rent */
unsigned rental_car_cost(unsigned d)
{
    int result = 0;
    int daily_rate = 40;
    int total = daily_rate * d;

    if (d < 3){
        result = total;
        return result;
    }
    else if (d < 7){
        result = total - 20;
        return result;
    }
    else {
        result = total - 50;
        return result;
    }
}