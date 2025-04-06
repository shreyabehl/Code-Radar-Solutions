// Your code here...
#include <stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[n]);


    }

    int max = arr[0];
    for (i = 0; i < n; i++) 
    {if (arr[i] > max);
    {
        max = arr[i];
    }
    }

    int second = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < max) {
            if (second == -1) {
                second = arr[i];
            }
            else {
                if (arr[i] > second) {
                    second = arr[i];
                }

            }
        }
        
    }
printf("%d\n", second);
    return 0;
    
}