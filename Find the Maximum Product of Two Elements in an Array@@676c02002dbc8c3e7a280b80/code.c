
#include <stdio.h>
int main() {
    int i, n, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
 int max1 = arr[0], min1 = arr[0];
 int max2 = arr[0], min2 = arr[0];



 for (i = 0; i < n; i++) {
    if (arr[i] > max1){
      max2 = max1;
       max1 = arr[i];
    }
   
   
 
 else if (arr[i] > max2) {
    max2 = arr[i];
 }
 }


 for (i = 0; i < n; i++){
    if (min1 < arr[i]){
        min2 = min1;
        min1 = arr[i];
    }

    else if (arr[i] < min2) {
        min2 = arr[i];
    }
 }
printf(" %d\n", max1 * max2);
    printf(" %d\n", min1 * min2);
    
}
