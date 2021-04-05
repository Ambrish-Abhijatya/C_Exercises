#include <stdio.h>

int leastDigit(int);
int greatestDigit(int);

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("The least digit of %d is %d.\n", x, leastDigit(x));
    printf("The greatest digit of %d is %d.\n", x, greatestDigit(x));
    return 0;
}

int leastDigit(int n)
{
    int ldigit = 9, currentDigit;
    while(n != 0)
    {
        currentDigit = n % 10;
        if(currentDigit < ldigit)
            ldigit = currentDigit;
        n /= 10;
    }
    return ldigit;
}

int greatestDigit(int n)
{
    int ldigit = 0, currentDigit;
    while(n != 0)
    {
        currentDigit = n % 10;
        if(currentDigit > ldigit)
            ldigit = currentDigit;
        n /= 10;
    }
    return ldigit;
}