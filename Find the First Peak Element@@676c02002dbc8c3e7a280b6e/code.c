#include <stdio.h>
int main(){
    int i, n;
    scanf("%d" &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[n] );

    }

    for(i = 0; i < n; i++){
        if (i == 0) {
          if  (arr[i] > arr[i - 1])
          {
            printf("%d\n", arr[n]);

          }
          else if (arr[i] > arr[i + 1])
          {
printf("%d" &arr[n]);
          }

    else {
        if (arr[i] > arr[i - 1])
        {
            if (arr[i] > arr[i + 1])
        }
       { printf("%d", arr[i]);
       }

    }
        }


    }
    printf("-1\n");
}
   




#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Array input
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {  // First element case
            if (arr[i] > arr[i + 1]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        } 
        else if (i == n - 1) {  // Last element case
            if (arr[i] > arr[i - 1]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        } 
        else {  // Middle elements
            if (arr[i] > arr[i - 1]) {
                if (arr[i] > arr[i + 1]) {
                    printf("%d\n", arr[i]);
                    return 0;
                }
            }
        }
    }

    printf("-1\n");  // No peak found
    return 0;
}














