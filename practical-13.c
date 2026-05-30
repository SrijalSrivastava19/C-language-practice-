#include<stdio.h>
int main ()
{
    int num , i , product=1 ;
    printf("Enter a number");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    {
        product *= i ;
        printf("%d\n",product);
    }
    return 0;
}
