#include <stdio.h>
int main(){
   int i, n, j;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            n++;
        }
        else {
            j++;
        }


    }
    printf("%d %d\n", n++, j++ );
}



















#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Array ka size input lo

    int arr[n], even_count = 0, odd_count = 0;  // Counters initialize
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Array elements input lo
    }

    for (int i = 0; i < n; i++) {  // Har element check karo
        if (arr[i] % 2 == 0) {
            even_count++;  // Even number mila toh even_count badhao
        } else {
            odd_count++;  // Odd number mila toh odd_count badhao
        }
    }

    printf("%d %d\n", even_count, odd_count);  // Output print karo
    return 0;
}
