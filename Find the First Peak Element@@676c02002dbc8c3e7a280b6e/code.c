#include <stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i] );

    }

    for(i = 0; i < n; i++){
        if (i == 0) {
          if  (arr[i] > arr[i + 1])
          {
            printf("%d\n", arr[i]);
          }
          }
          else if (i == n - 1)
          {
            if (arr[i] > arr[i - 1]) {
                printf("%d\n", arr[i]);
                
           
          }
        }
      else {
    if (arr[i] > arr[i - 1]) {
        if (arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
        }
    }
}

    }
    printf("-1\n");
    return 0;
}

