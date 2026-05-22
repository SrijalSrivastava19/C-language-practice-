#include <stdio.h>
int main ()
{
    int num_1 , num_2 , num_3 ;
    printf("Enter num_1\n");
    scanf("%d",&num_1);
    printf("Enter num_2\n");
    scanf("%d",&num_2);
    printf("Enter num_3\n");
    scanf("%d",&num_3);
    if (num_1 >= num_2 && num_1 >=num_3)
    {
        printf("num_1 is the largest number\n");
    }
    else if (num_2 >= num_1 && num_2 >= num_3)
    {
        printf("num_2 is the largest number\n");
    }
    else
    {
        printf("num_3 is the largest number\n");
    }
    return 0;
}

    