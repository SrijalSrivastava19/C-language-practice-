#include <stdio.h>
int main ()
{
    int num_1 , num_2 ;
    printf("Enter num_1 num_2\n");
    scanf("%d%d",&num_1,&num_2);
    if (num_1 == num_2)
    {
        printf("Both numbers are equal\n");
    }
    else
    {
        printf("Both numbers are not equal\n");
    }
    return 0;

}
