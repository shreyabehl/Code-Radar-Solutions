#include <stdio.h>
int main(){
    int i,n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", arr[i]);

    }
    int max = 0; int min = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > max){
            arr max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];

        }
    }
    printf("%d %d\n", min, max );
}












