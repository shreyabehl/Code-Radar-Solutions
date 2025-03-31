





#include <stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for( i = 0; i < n; i++){
        if(arr[i] > arr[i - 1])
        {
            printf("Not Sorted\n");

        }
    }
    printf("Sorted\n");
    }
