//A program to find the surface_area  of a cylinder

#include<stdio.h>

int main (){
    int radius, height, surface_area;
int pi = 3.14;
   
    
    printf("Enter radius: ");
    scanf("%d", &radius);
    
     printf("Enter height: ");
    scanf("%d", &height);
    
    surface_area = (2*pi*radius*radius)+(2*pi*radius*height);
    
    printf("The surface_area is %d", surface_area);
    
}