/*
    *
   / \
  /   \
 /     \
/       \
\       /
 \     /
  \   /
   \ /
    *
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
        if(i==0)
            continue;
        else
        {
            for(int k=1;k<=abs(i);k++)
                printf(" ");
            for(int j=1;j<(n+1-abs(i))*2;j++)
            {
                if(i==n || i==-n)
                    printf("*");
                else if(j==1 || j==(n+1-abs(i))*2-1)
                {
                    if(i<0 && j==1)
                        printf("/");
                    else if(i<0 && j==(n+1-abs(i))*2-1)
                        printf("\\");
                    else if(i>0 && j==1)
                        printf("\\");
                    else
                        printf("/");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    getch();
}