
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, a;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=-n;i<=n;i++)
    {
        for(int k=1;k<=abs(i);k++)
            printf("  ");
        a=2;
        for(int j=1;j<(n+1-abs(i))*2;j++)
        {
            if(j>n+1-abs(i))
            {
                printf("%d ",j-a);
                a+=2;
            }
            else
                printf("%d ",j);
        }
        printf("\n");
    }

    getch();
}