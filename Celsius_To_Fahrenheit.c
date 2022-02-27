#include<stdio.h>
int main()
{
    float celsius,farenheit;
    scanf("%f",&celsius);
    farenheit=(1.8)*celsius+32;
    printf("%.2f",farenheit);
    return 0;
}