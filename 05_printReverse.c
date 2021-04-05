#include <stdio.h>

int Reverse(int);

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
   
    printf("The reverse of %d is %d.\n", x, Reverse(x));

    return 0;
}

int Reverse(int x)
{
    int reverse = 0;
    while (x != 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    return reverse;
}