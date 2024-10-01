#include<stdio.h>

int main(){

// Declaring the variable
    int a,b,c;

// taking user input
    printf("enter your 3 numbers");
    scanf("%d%d%d",&a,&b,&c);

// using conditions 
if( a > b && a > c){
    printf("The greatest number is %d",a);
}

else if( b > a && b > c){
    printf("The greatest number is %d",b);
}

else{
    printf("The greatest number is %d",c);
}  

    return 0;

}