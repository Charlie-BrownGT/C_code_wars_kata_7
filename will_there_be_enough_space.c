int enough(int cap, int on, int wait)
{
    int requirement = on + wait;

    if(cap >= requirement){
        return 0;
    }

    int result = requirement - cap;
    return result;
}