#include<stdio.h>

int main()
{
    int i = 5;
    printf("%d\n", i);
    i += 5;
    printf("%d\n", i);
    // i++;
    // printf("%d\n", ++i);
    printf("%d\n", i++);
    printf("%d\n", i);

    /*
    i++ post incriment
    ++i pre incriment
    i-- post decriment
    --i pre decriment
    */
    
    return 0;
}