#include <stdio.h>
#include <conio.h>
#include <limits.h>

void main()
{
    printf(" char : %c",CHAR_MAX);
    printf("\n signed char : %hhi",SCHAR_MAX);
    printf("\n unsigned char : %hhu",UCHAR_MAX);
    printf("\n short int : %hd",SHRT_MAX);    
    printf("\n unsigned short int : %hu",USHRT_MAX);
    printf("\n int : %d",INT_MAX);
    printf("\n unsigned int : %u",UINT_MAX);
    printf("\n long int : %ld",LONG_MAX);
    printf("\n unsigned Long : %lu",ULONG_MAX);
    printf("\n long long int : %lld",LLONG_MAX);
    printf("\n unsigned long long int : %llu",ULLONG_MAX);
    printf("\n float : %f",__FLT_MAX__);
    printf("\n double : %lf",__DBL_MAX__);
    getch();
}