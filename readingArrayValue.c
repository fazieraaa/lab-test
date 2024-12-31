#include <stdio.h>  // Include standard input/output library

int main() {
    // Create array with 5 numbers already in it
    int numbers[3] = {30, 40, 50};  //Array with 500000 values already set
    
    // Print title
    printf("Reading values from array\n");
    printf("========================\n\n");
    
    // Loop through array
    for(int i = 0; i < 3; i++) {            // i goes from 0 to 4 (5 numbers total)
        printf("Position %d contains: %d\n", i, numbers[i]);  // Show position and value
        printf("--------------------\n");    // Print line for separation
    }
    
    return 0;  // End program
}