#include <stdio.h>

int main() {
    int i, n, even_count = 0, odd_count = 0; // Initialize counters
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Array input
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;  // Even count badhao
        } else {
            odd_count++;   // Odd count badhao
        }
    }

    printf("%d %d\n", even_count, odd_count);  // Output print karo
    return 0;
}









#include <stdio.h>
int main(){
   int i, n, j = 0, k = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            j++;
        }
        else {
            k++;
        }


    }
    printf("%d %d\n", n, j );
    return 0;
}






