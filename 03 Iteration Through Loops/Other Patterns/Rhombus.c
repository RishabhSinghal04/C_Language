
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<=n;k++)
            printf(" ");
        for(int j=1;j<=n;j++)
            printf("*");
        printf("\n");
    }

    getch();
}