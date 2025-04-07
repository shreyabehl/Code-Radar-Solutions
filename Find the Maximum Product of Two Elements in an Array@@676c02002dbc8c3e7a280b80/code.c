// Your code here...
#include <stdio.h>
int main() {
    int i, n, j;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] > arr[j]) {
              int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
                
     }
     int product = arr[n - 1] * arr[n - 2];
         printf("%d", product);   
}