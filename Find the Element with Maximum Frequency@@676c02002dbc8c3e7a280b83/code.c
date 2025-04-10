#include <stdio.h>
int main(){
    int i, n, j = 0, k;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[i]);

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    
      for (i = 0; i < n; i++){
          k = 1;
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                k++;
            }
        }
      }
    }
    

    printf("%d\n", arr[i], k);
    }

















/*

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], a[1000001] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        a[arr[i]]++;
    }

    int b = 0;
    int ans = 1000001;

    for (int i = 0; i < 1000001; i++) {
        if (a[i] > b) {
            b = a[i];
            ans = i;
        } else {
            if (a[i] == b) {
                if (i < ans) {
                    ans = i;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}





