//File handling | writing and reading files
#include <stdio.h>
#include <stdlib.h>
int main() {
int num;
FILE *fptr;

// Open file.txt in read mode
fptr = fopen("C:\\Users\\Admin\\Documents\\Course Work\\C-Programing\\file.txt", "r");
if (fptr == NULL) {
printf("Error opening file!\n");
exit(1);
}
fscanf(fptr, "%d", num);
fprintf(fptr, "The number is %d", num);
fclose(fptr);

// Open sample.txt
fptr = fopen("C:\\Users\\Admin\\Documents\\Course Work\\C-Programing\\sample.txt", "w");
if (fptr == NULL) {
printf("Error opening sample.txt for writing!\n");
exit(1);
}
// Write the number to sample.txt
fprintf(fptr, "%d", num);
fclose(fptr);

printf("Number successfully read from file.txt and written to sample.txt.");
return 0;
}
