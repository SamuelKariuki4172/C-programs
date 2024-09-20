//A program to find the volume of a cylinder

#include<stdio.h>

int main (){
    int radius, height, volume;
int pi = 3.14;
   
    
    printf("Enter radius: ");
    scanf("%d", &radius);
    
     printf("Enter height: ");
    scanf("%d", &height);
    
    volume = pi*radius*radius*height;
    
    printf("The volume is %d", volume);
    
}