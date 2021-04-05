#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int ldigit = x % 10, fdigit, temp = x;
    while(temp != 0)
    {
        fdigit = temp % 10;
        temp /= 10;
    }
    printf("The sum of first and last digits of %d is %d.", x, fdigit + ldigit);
    
    return 0;
}