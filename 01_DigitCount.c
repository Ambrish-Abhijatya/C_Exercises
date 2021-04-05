/*Print the number of digits of any given integer*/

#include <stdio.h>
#include <math.h>

int DigitCount(int);

int main()
{
    int n, digitCount = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The number of digits in %d is %d.\n", n, DigitCount(n));

    int digArray[DigitCount(n)], temp = n, i =0;
    while (temp != 0)
    {
        digArray[i++] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < DigitCount(n); i++)
    {
        printf("The digit in %d's place is %d.\n", (int)pow(10, i), digArray[i]);
    } 
    
    
    return 0;
}

int DigitCount(int x)
{
    int count = 0;
    while(x != 0)
    {
        count++;
        x /= 10;
    }
    return count;
}