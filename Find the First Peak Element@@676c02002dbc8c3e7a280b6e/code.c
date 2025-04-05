#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);

    }
    for(i = 0; i < n; i++){
        if (i == 0) {
         if ( arr[i] > arr[i + 1]){
            printf("%d", &arr[i]);

         }
         else (i == n - 1){
            if ( arr[i] > arr[i - 1]){
                printf("%d", &arr[i]);
            }
         }
         else {
            if (arr[i] > arr[i - 1]) {
                if (arr[i] > arr[i + 1]) {
                     printf("%d\n", arr[i]);
                    return 0;
                }
            }
         }
        }
    }
    printf("-1\n");
}














