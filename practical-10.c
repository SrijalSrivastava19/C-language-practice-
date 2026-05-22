#include<stdio.h>
int main ()
{
    int physics, chemistry, mathematics, english, computer, sum ;
    float percentage;
    printf("Enter marks of physics:\n");
    scanf("%d", &physics);
    printf("Enter marks of chemistry:\n");
    scanf("%d", &chemistry);
    printf("Enter marks of mathematics:\n");
    scanf("%d", &mathematics);
    printf("Enter marks of english:\n");
    scanf("%d", &english);
    printf("Enter marks of computer:\n");
    scanf("%d",&computer);
    sum=physics+chemistry+mathematics+english+computer;
    printf("Total Marks obtained: %d\n", sum);
    percentage=(float)sum/500*100;
    printf("Total percentage obtained: %.2f%%\n", percentage);
    if (percentage >=90)
    {
        printf("Grade - A");
    }
    else if (percentage >=80)
    {
        printf("Grade - B");
    }
    else if (percentage >=60)
    {
        printf("Grade - C");
    }
    else
    {
        printf("Grade - D");
    }
    return 0;
}