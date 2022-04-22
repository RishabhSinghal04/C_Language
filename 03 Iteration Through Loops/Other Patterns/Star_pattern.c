/*
            *
           * *
  *********************
   *     *     *     *
    *   *       *   *
     * *         * *
      *           *
     * *         * *
    *   *       *   *
   *     *     *     *
  *********************
           * *
            *
13 rows
21 coloumns
*/

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
        for(int j=-(n*4-3)/2;j<=(n*4-3)/2;j++)
        {
            if(abs(i)==n-2 || i+j==-n || i+j==n || j==i+n || i==j+n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}