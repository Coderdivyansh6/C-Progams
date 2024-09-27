#include<stdio.h>

int main(){
    
// Declareing the variables
    int num;

// Taking the user input
    printf("Enter the number : ");
    scanf("%d",&num);

// using if else condition
    if(num % 2 == 0){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }
    return 0;
}