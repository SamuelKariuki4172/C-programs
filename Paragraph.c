#include <stdio.h>
#include <stdlib.h>
struct Paragraph{
    char content[200];
}paragraph;

int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\Admin\\Documents\\Course Work\\C-Programing\\paragraph.txt","w");
    if(fptr==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("Enter paragraph: ");
    fgets(paragraph.content, sizeof(paragraph.content),stdin);

    fprintf(fptr, "%s\n", paragraph.content);
    fclose(fptr);
    printf("Data successfully written to output.txt");
    return 0;
}
