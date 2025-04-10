#include <stdio.h>
int main(){
    int i, n, j, k;
    scanf("%d", &n);
    int arr[n];
    int max_f = 0, max_e;

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
            if (k > max_f) {
                max_f = k;
                max_e = arr[i];
            }
        }
    }

    printf("%d %d\n", max_e);
    return 0;
}




