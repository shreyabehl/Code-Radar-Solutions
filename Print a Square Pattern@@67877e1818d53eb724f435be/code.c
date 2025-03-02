
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)  // Outer loop runs 2 times
    {
        for(j = 1; j <= n; j++)  // Inner loop runs 2 times for each iteration of the outer loop
        {
            printf("*");
        }
        printf("\n");  // Move to a new line after printing 2 stars
    }
}



