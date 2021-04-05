#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);
int Reverse(int);

int main()
{
    int x, palCount = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (isPalindrome(i))
        {
            palCount ++;
            printf("%d ", i);
        }   
    }

    printf("\nThere are %d palindromes in the range 1-%d.", palCount, x);

    return 0;
}

bool isPalindrome(int x)
{
    if(Reverse(x) == x)
        return true;
    return false;
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