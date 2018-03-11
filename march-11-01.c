#include<stdio.h>
int main()
{
    int sec, h, m, s;

    printf("Input Second : ");
    scanf("%d",&sec);

    h=(sec/3600);

    m=(sec-(3600*h))/60;

    s= (sec -(3600*h)-(m*60));

    printf("your given second is %d convert to hour is %d minute is %d and second %d", sec, h, m, s);
    return 0;
}
