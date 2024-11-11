// Files
#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    FILE *fptr; //pointer

    fptr = fopen("C:\\Users\\Admin\\Documents\\Course Work\\C-Programing\\sam.bin", "wb" );
    if (fptr==NULL){
        printf("Error opening the file ");
        exit(1);
    }
    printf("Enter a random number: ");
    scanf("%d", &number);

    fprintf(fptr, "The number is %d\n", number);
    fclose(fptr);
    printf("Number written successfully");

    return 0; //execution successful
}
