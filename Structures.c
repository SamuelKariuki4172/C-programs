//A structure named book
#include <stdio.h>
#include<string.h>

struct Book{
    char title [30];
    char author[30];
    char ISBN[13];
    float price;
    int publication_year;

}Book1, Book2;
int main (){

    
    //struct Book Book1, Book2;
    strcpy(Book1.title, "Intoduction to C programming");
    strcpy(Book1.author, "John Smith");
    strcpy(Book1.ISBN, "9780131103627");
    Book1.publication_year = 2022;
    Book1.price = 49.99;
    
    printf("Title: %s\n", Book1.title);
    printf("Author: %s\n", Book1.author);
    printf("ISBN: %s\n", Book1.ISBN);
    printf("Publication year: %d\n", Book1.publication_year);
     
    printf("Price: %.2f\n", Book1.price); 

    return 0;
    
    
    
}

