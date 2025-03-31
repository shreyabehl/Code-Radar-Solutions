// wap in c that finds both the max and min elements in an integer array. the program should read the array elements from user and then input the man and min elements

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Array ka size input lo

    int arr[n];  // Array declare kiya
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Elements input lo
    }

    int max = arr[0], min = arr[0];  // Pehle element ko max & min maan lo

    for (int i = 1; i < n; i++) {  // Loop chalana start karo index 1 se
        if (arr[i] > max) {
            max = arr[i];  // Max update karo agar bada element mile
        }
        if (arr[i] < min) {
            min = arr[i];  // Min update karo agar chhota element mile
        }
    }

    printf("%d %d\n", max, min);  // Max aur Min print karo
    return 0;
}
