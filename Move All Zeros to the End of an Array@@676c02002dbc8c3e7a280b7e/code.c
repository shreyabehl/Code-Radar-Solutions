
#include <stdio.h>
int main(){
    int i, n, j;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    for (i = 0; i < n; i++) {
        
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
         
        }
    }
     for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j++;
            

        }

        
    }
   for (i = 0; i < j; i++) {

   
    printf("0 ");
   }

    }



