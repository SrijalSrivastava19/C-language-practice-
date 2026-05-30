//binary to decimal conversion
#include<stdio.h>
int main ()
{
    int binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
// deciaml to binary conversion
#include<stdio.h>
int main ()
{
    int decimal , binary=0 , base =1 , rem ;
    printf("Enter a decimal number : \n");
    scanf("%d" , &decimal);
    while (decimal >0)
    {
        rem = decimal %2 ;
        binary = binary + rem * base ;
        decimal = decimal /2 ;
        base = base *10 ;

    }
    printf("Binary equivalent : %d\n" , binary);
    return 0 ;
}
