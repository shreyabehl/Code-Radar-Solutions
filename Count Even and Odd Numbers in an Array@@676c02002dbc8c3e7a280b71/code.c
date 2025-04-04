#include <stdio.h>
int main(){
    int i, n, j = 0, k = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            j++;
        }
        else{
            k++;
        }
    }
    printf("%d %d\n", j, k);
}
















