/*
*******
 *****
  ***
   *
  ***
 *****
*******
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; i++)
    {
        for (int k = 0; k < n - abs(i); k++)
            printf(" ");

        for (int j = 1; j <= (abs(i) * 2) + 1; j++)
            printf("*");

        printf("\n");
    }
    getch();
}