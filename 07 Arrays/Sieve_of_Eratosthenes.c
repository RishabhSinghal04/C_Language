
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

void PrimeNumber(ull n)
{
    ull *prime_num = calloc(n, sizeof(ull));

    // Process to mark composite numbers
    for (ull i = 2; i <= n; i++)
    {
        if (prime_num[i] == 0)
        {
            for (ull j = i * i; j <= n; j += i)
                prime_num[j] = 1;
        }
    }

    // Process to print prime numbers
    for (ull i = 2; i <= n; i++)
    {
        if (prime_num[i] == 0)
            printf("%d\n", i);
    }
}

void main()
{
    ull num;
    printf("Enter a number: ");
    scanf("%llu", &num);

    PrimeNumber(num);

    getch();
}