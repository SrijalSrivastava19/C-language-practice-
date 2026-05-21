#include<stdio.h>
int main ()
{
    #define PI 3.14
    int radius , circumference , area ;
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    circumference = 2 * PI * radius ;
    printf("Circumference of circle is :\n%d\n",circumference);
    area = PI * radius * radius ;
    printf("Area of circle is :\n%d\n",area);
    return 0;
}