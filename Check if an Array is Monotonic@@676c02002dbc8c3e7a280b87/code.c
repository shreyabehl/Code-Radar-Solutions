// Your code here...
#include <stdio.h>
int main() {
    int i, n, j, k = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] < arr[j])
        
        printf("YES");

        else {
            printf("NO");
        }
        }
    }
}