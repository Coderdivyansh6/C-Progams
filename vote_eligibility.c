#include<stdio.h>

int main(){

// Declaring the variables
    int age;

// taking user input
    printf("enter your age : ");
    scanf("%d",&age);

// using conditions
    if( age >= 18){

        printf("you are eligible to vote");

    }
 
    else{

        printf("you are not eligible to vote");

    }

    return 0;
}