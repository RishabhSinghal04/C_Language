/*
1
1 * 2
1 * 2 * 3
1 * 2 * 3 * 4
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
            if(j!=i)
                printf("* ");
        }
        printf("\n");
    }
    getch();
}