#include <stdio.h>

int sortNumbers(int numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {    
        for (int j = 0; j < size - i - 1; j++) {  
            if (numbers[j] > numbers[j + 1]) {   
                int temp = numbers[j];      
                numbers[j] = numbers[j + 1];    
                numbers[j + 1] = temp;      
            }
        }
    }
    return 0;
}
