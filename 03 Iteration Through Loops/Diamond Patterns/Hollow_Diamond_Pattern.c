#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=-n;i<=n;i++)
    {
        for(int k=1;k<=abs(i);k++)
            printf(" ");
        for(int j=1;j<(n+1-abs(i))*2;j++)
        {
            if(j==1 || j==(n+1-abs(i))*2-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");
}