#include<stdio.h>

int main(){
	int i,j,row;
	char ch='A';
    printf("Rows: ");
    scanf("%d", &row);

    // Outer loop for rows
    for (i = 1; i <= row; i++) {
        // Inner loop for printing 'A' to 'Z'
        j = 1;
        while (j <= 26) {
            printf("%c", ch);
            ch++;  // Move to the next character
            j++;
        }

        // Reset the character to 'A' for the next row
        ch = 'A';

        printf("\n");
    }

    return 0;
}
