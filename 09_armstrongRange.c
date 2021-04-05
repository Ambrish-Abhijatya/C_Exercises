/*Examples of armstrong numbers: 370, 371, 407, 153, 
1634, 8208, 548834, 1741725, 9926315 etc.*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int DigitCount(int);
bool isArmstrongNum(int);

int main()
{
    int x, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (isArmstrongNum(i))
        {
            count ++;
            printf("%d ", i);
        }   
    }

    printf("\nThere are %d armstrong numbers in the range 1-%d.", count, x);
    
    return 0;
}

bool isArmstrongNum(int x)
{
    int result = 0;
    int nDigits = DigitCount(x), temp = x;
    while(temp != 0)
    {
        int cDigit = temp % 10;
        result = result + (int)pow(cDigit, nDigits);
        temp /= 10;
    }
    if (result == x)
        return true;
    
    return false;
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