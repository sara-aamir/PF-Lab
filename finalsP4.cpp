#include <stdio.h>

#define SIZE 10
#define REPEATED_SIZE 50

int main() {
    int firstArray[SIZE] = {0,1,2,3,4,5,6,8,8,9};
    int secondArray[50];

    // Repeat elements from the first array in the second array
    for (int i = 0; i < 50; i++) {
        secondArray[i] = firstArray[i % SIZE];
        
    }
    for(int i=0;i<50;i++){
    	printf(" %d ",secondArray[i]);
	}
    printf("\n");

    // Find the element and its count with max occurrences
    int maxElement = 0;
    int maxCount = 0;

    for (int i = 0; i < 50; i++) {
        int currentElement = secondArray[i];
        int currentCount = 1;

        for (int j = i + 1; j < 50; j++) {
            if (secondArray[j] == currentElement) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = currentElement;
        }
    }

    // Print the result
    printf("Element with max occurrences: %d\n", maxElement);
    printf("Count of max occurrences: %d\n", maxCount);

    return 0;
}

