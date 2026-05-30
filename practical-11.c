#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter two numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter operator\n");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
            printf("%d\n",a+b+c);
            break;
        case '*':
            printf("%d\n",a*b*c);
            break;
        case '/':
            printf("%d\n",a/b/c);
            break;
        case '-':
            printf("%d\n",a-b-c);
            break;
    }
    return 0;
}