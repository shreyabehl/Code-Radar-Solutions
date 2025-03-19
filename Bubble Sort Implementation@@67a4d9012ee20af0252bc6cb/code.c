
#include <stdio.h>

int bubbleSort(int n[], int size) {
    for (int i = 0; i < size - 1; i++) {    
        for (int j = 0; j < size - i - 1; j++) {  
            if (n[j] > n[j + 1]) {   
                int temp = n[j];      
                n[j] = n[j + 1];    
                n[j + 1] = temp;      
            }
        }
    }
    return 0;
}





