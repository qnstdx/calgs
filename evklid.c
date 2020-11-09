#include <stdio.h>

int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;    
    }

    return a + b;
}

int main()
{    
    int result = gcd(30, 18);
    printf("%d\n", result);

    return 0;
}