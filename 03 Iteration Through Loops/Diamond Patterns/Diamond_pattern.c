#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=-n;i<=n;i++)
    {
        for(int k=1;k<=abs(i);k++)
            printf(" ");
        for(int j=1;j<(n+1-abs(i))*2;j++)
            printf("*");
        printf("\n");
    }
    getch();
}