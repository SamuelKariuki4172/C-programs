//C variables and data types
#include<stdio.h>
int main()
{
    //declaration and inititialization
    char a = 'K';
    char name[4] = "Sam";
    int age = 13;
    float area = 20.86;
    double salary = 600000000;
    
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("The character is %c\n",a);
    printf("Enter name: ");
    scanf("%s", &name);
    printf("The string is %s\n ",name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("The age is %d\n",age);
    printf("Enter the area: ");
    scanf("%f", &area);
    printf("The area is %.2f\n ",area);
    printf("Enter the salary: ");
    scanf("%lf", &salary);
    printf("The salary is %.3lf",salary);
     return 0;
}
    /*
    printf("The character is %c\n",a);
    printf("The string is %s\n ",name);
    printf("The age is %d\n",age);
    printf("The area is %.2f\n ",area);
    printf("The salary is %.3lf",salary);
    return 0;
    */