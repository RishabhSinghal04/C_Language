/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            printf("  ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    getch();
}