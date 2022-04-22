#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=-n;i<=n;i++)
    {
        if(i==0)
            continue;
        else
        {
            for(int k=1;k<=abs(i);k++)
                printf(" ");
            for(int j=1;j<(n+1-abs(i))*2;j++)
            {
                if(j==1 || j==(n+1-abs(i))*2-1)
                    printf("%d",abs(i)-1);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    getch();
}