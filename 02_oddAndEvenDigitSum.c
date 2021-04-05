/*Sum of even and odd digits of a number separately*/
#include <stdio.h>

int oddSum(int);
int evenSum(int);
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    printf("The sum of even digits of %d is %d.\n", x, evenSum(x));
    printf("The sum of odd digits of %d is %d.\n", x, oddSum(x));

    return 0;
}

int oddSum(int n)
{
    int sum = 0, currDig;
    while(n != 0)
    {
        currDig = n % 10;
        if(currDig % 2 != 0)
            sum += currDig;
        n /= 10;
    }
    return sum;
}

int evenSum(int n)
{
    int sum = 0, currDig;
    while(n != 0)
    {
        currDig = n % 10;
        if(currDig % 2 == 0)
            sum += currDig;
        n /= 10;
    }
    return sum;
}
