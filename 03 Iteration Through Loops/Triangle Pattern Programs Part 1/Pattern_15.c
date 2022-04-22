/*
1
3 2
6 5 4
10 9 8 7
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,b,a=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a+=i;
        b=a;
        for(int j=1;j<=i;j++)
        {
            printf("%d \t",b);
            b--;
        }
        printf("\n");
    }
    getch();
}