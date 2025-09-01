// fibonacci series

#include<stdio.h>
int main()
{
    int n, first = 0, second = 1, next;

    //Input the number of terms of fibonacci series
    printf("Enter the Terms: ");
    scanf("%d", &n);

    //printing fibonacci series
    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            // print the first term
            printf("%d", first);

        }else if (i==1)
        {
            //print the second term
            printf("%d", second);

        }else
        {
            next = first + second; // for next term

            printf("%d", next);

            first = second; //update the first number
            second = next; // update the second number

        }

        printf("\n");
        
    }
     return 0;
}