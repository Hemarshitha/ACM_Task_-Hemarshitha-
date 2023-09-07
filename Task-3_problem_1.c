#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter the number of elements in a list: ");
    scanf("%d", &n);

    int list[n]; 

    for (i = 0; i < n; i++) 
    {
        printf("Enter the numbers in the list: ");
        scanf("%d", &list[i]); 
    }

    for (i = 0; i < n; i++)
   {
         if (list[i] % 2 != 0) 
         { 
            sum += list[i]; 
         }
    }

    printf("The sum of odd elements is: %d\n", sum);

    return 0;
}