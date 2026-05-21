#include<stdio.h>
int main ()
{
    int temperature_in_celsius, temperature_in_fahrenheit ;
    printf("Enter temperature in celsius\n");
    scanf("%d",&temperature_in_celsius);
    temperature_in_fahrenheit = (temperature_in_celsius * 9/5) +32 ;
    printf("Temperature in fahrenheit is :\n%d\n",temperature_in_fahrenheit);
    return 0;
}