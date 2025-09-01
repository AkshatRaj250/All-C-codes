// Generate even number b/w 100 and 200

#include <stdio.h>

int main()
{
    int i;
    // for loop
    for (i=100; i<=199; i++)
    {
        if (i%2==0)
        {
            printf("%d is even\n", i);
        }
        
    }

    return 0;
}

