// Your code here...
#include <stdio.h>
int main() {
    int i, n, target;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[n]);

    }
   scanf("%d", &target);
   int index = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i; 
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}