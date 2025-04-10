#include <stdio.h>
int main(){
    int i, n, j, k;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++){
        k = 1;
        if (arr[i] != -1) {
            for (j = i + 1; j < n; j++){
                if (arr[i] == arr[j]){
                    k++;
                    arr[j] = -1;
                }
            }
            printf("%d %d\n", arr[i], k);
        }
    }

    return 0;
}


