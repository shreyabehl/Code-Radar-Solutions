#include <stdio.h>
#include <limits.h>
int main(){
    int i, n, j = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
        scanf("%d", arr[i]);
    }

    int a = INT_MAX;
    int b = INT_MIN;
     
     for (i = 0; i < n; i++){
        if (arr[i] < a) {
            b = a;
            a = arr[i];



        }
        else {
            if (arr[i] < b){
                if (arr[i] != a){
                    b = arr[i];
                }
            }
        }
        
     }

     if (b = INT_MAX){
        printf("-1\n" );

     }

     else 
     {
        printf("%d", b);
     }

}



















/*

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MAX;
    int second = INT_MAX;

    for (i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else {
            if (arr[i] < second) {
                if (arr[i] != first) {
                    second = arr[i];
                }
            }
        }
    }

    if (second == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}







*\
