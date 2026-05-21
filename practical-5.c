#include<stdio.h>
int main()
{
    int num_1 , num_2 , num_3 ;
    printf("Enter first numnber\n");
    scanf("%d",&num_1);
    printf("Enter second numnber\n");
    scanf("%d",&num_2);
    num_3 = num_1;
    num_1 = num_2;
    num_2 = num_3;
    printf("First numnber\n");
    printf("%d\n", num_1);
    printf("Second numnber\n");
    printf("%d\n", num_2);
    return 0;
}
