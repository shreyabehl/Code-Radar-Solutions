// Your code here...
#include <stdio.h>
int main() {
    int i, n, j = 0, k = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n-1 ; i++){
        if (arr[i] >= arr[i + 1]){
            k++;
        }

        else if (arr[i] <= arr[i + 1]){
            j++;
        }
    }
    
        if (k == n - 1)

        {
            printf("YES\n");
        }

        else if (j == n - 1)
         {
            printf("YES\n");
        }

        else { 
            printf("NO\n");
    }
}

    
