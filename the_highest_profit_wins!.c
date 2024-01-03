void min_max (const int arr[/* count */], int count, int *min, int *max)
{
    int maximum = arr[0];
    int minimum = arr[0];

    int i = 0;
    
    while(i < count){
        
        if(minimum >= arr[i]){
            minimum = arr[i];
        }

        if(maximum <= arr[i]){
            maximum = arr[i];
        }

        i++;
    }
    *min = minimum;
    *max = maximum;
}