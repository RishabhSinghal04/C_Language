#include <stdio.h>
#include <conio.h>
void main()
{
    int num,factor_count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            factor_count++;
    }
    if(factor_count==2)
        printf("%d is a Prime Number",num);
    else
        printf("%d is not a Prime Number",num);
    getch();
}