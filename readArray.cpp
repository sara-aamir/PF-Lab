#include<stdio.h>
#define SIZE 10
int main(){
	int i;
	int x[SIZE];
	FILE *file=fopen("numbers.txt","r");
	for (int i = 0; i < SIZE; i++) {
        if (fscanf(file, "%d", &x[i]) != 1) {
            fprintf(stderr, "Error reading from the file\n");
            fclose(file);
            return 1; // Exit with an error code
        }
    }

    // Close the file
    fclose(file);

    // Print the elements in a single line
    printf("Output Format: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0; // Exit successfully
}
	
	

