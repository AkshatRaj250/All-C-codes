// Determine and output whether Number N is even or odd

#include <stdio.h>

int main()
{
    int N;
    
    //User Input
    printf("Enter the Number: ");
    scanf("%d", &N);

    //checking even or odd
    if (N%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}