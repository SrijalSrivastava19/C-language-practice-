// sum of arrays
#include <stdio.h>
int main ()
{
    int elements[5];
    int sum = 0;
    printf("Enter values of 5 elements :\n");
    scanf("%d %d %d %d %d", &elements[0],&elements[1],&elements[2],&elements[3],&elements[4]);
    for (int i = 0; i < 5 ; i++)
    {
        sum = sum + elements[i];
    }
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}