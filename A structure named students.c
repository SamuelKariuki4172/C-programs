//A structure called students
#include <stdio.h>
#include<string.h>

struct Student {
    char name [25];
    char email[35];
    char reg_no[17];
    float marks;
    int phone_no;
    int ID;
}Student1, Student2;
int main (){

    
    //struct Student Student1, Student2;
    strcpy(Student1.name, "Sam");
    strcpy(Student1.reg_no, "BCS-05-0044/2024");
    strcpy(Student1.email, "mugosamuel@zetech.ac.ke");
    Student1.ID = 3465789;
    Student1.phone_no = 67879;
    Student1.marks = 60.3;
    
    printf("Name: %s\n", Student1.name);
    printf("Registration Number: %s\n", Student1.reg_no);
    printf("Email: %s\n", Student1.email);
    printf("ID: %d\n", Student1.ID);
    printf("Phone: %d\n", Student1.phone_no); 
    printf("Marks: %.2f\n", Student1.marks); 

    return 0;
    
    
    
}

