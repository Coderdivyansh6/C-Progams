#include<stdio.h>

int main(){
     // declareing the variables
    float radius,circle,circumference;

    // user input
    printf("Enter the radious :");
    scanf("%f",&radius);
    
    // calculating area and circumference
    circle = 3.14 * (radius*radius);
    circumference = 2 * 3.14 * radius;

    // output 
    printf("\nThe area of a circle is : %.2f",circle);
    printf("\nThe area of a circumference is : %.2f",circumference);
    return 0;

}