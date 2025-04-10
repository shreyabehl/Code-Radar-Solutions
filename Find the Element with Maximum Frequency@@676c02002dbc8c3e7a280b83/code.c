#include <stdio.h>
int main(){
    int i, n, j = 0, k;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[i]);

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
      for (i = 0; i < n - 1; i++){
          k = 1;
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                k++;
            }
        }
         printf("%d\n", arr[i], k);
      }
    
    

   
    }













