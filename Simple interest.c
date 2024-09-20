// A program to calculate the simple interest

#include<stdio.h>

int main(){
    int principle_amount, time, rate, simple_interest;
    
    
    printf("Enter principle_amount: ");
    scanf("%d",&principle_amount);
    
    printf("Enter the time");
    scanf("%d", &time);
    
    printf("Enter rate");
    scanf("%d", &rate);
    
    simple_interest= (principle_amount*time*rate)/100;
    
    printf("The simple_interest is %d", simple_interest);
    
    return 0;
}