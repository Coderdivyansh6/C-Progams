// program to swap numbers using pointer

#include<stdio.h>

// creating a function to swap values using pointers

void update(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

// declearing variables a and b as integers 
    int a,b;

// taking input
    printf("enter your numbers : ");
    scanf("%d %d",&a,&b);

// calling function by passing adresses of variables

    update(&a,&b);

// printing the values after swap 
    printf("\nyour a is %d",a);
    printf("\nyour b is %d",b);

    return 0;
}