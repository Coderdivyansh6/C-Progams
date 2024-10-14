#include<stdio.h>

int main(){
//  Declaring the varibles

    int num,count=0;

// Taking user input

    printf("Enter your number : ");
    scanf("%d",&num);

// using loop

while( num > 0){

    num = num / 10;
    count++ ;
}

    printf("the number of digits are %d",count);
    return 0;
}