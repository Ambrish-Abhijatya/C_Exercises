#include <stdio.h>
#include <stdbool.h>

int Reverse(int);
bool isPalindrome(int);

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
   
    (isPalindrome(x)) ? printf("%d is a palindrome.\n", x) : printf("%d is not a palindrome.\n", x);

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