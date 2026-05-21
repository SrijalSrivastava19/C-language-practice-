#include<stdio.h>
int main ()
{
    int principal_amount, rate, time;
    float simple_interest, compound_interest ;
    printf("Enter principal amount\n");
    scanf("%d",principal_amount);
    printf("Enter rate of interest\n");
    scanf("%d",rate);
    printf("Enter time\n");
    scanf("%d",&time);
    simple_interest = (float)(principal_amount * rate * time) / 100;
    printf(" Simple Interest is :\n%.2f\n",simple_interest);
    compound_interest = principal_amount * (pow((1 + rate / 100.0), time) - 1);
    printf("Compound Interest is :\n%.2f\n",compound_interest);
    return 0;
}