// Palindrome

#include<stdio.h>

int main()
{
    int original, num, reversed = 0, remainder;

    // taking input
    printf("Enter an Integer: ");
    scanf("%d", &num);

    //store original number
    original = num;

    //do while loop

    do
    {
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num /= 10;

    } while (num != 0);

    if (original == reversed)
    {
        printf("%d is a palindrome\n", original);
    }
    else
    {
        printf("%d is not a palindrome", original);
    }
    
    return 0;
    
}