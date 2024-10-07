#include<stdio.h>

int main(){
// declearing the variables
   int year;

// Taking user input
   printf("Enter your year to check leap year");
   scanf("%d",&year);

// checking conditions
if(year%4==0){
    printf("it is a leap year");
}

else{
    printf("it is not a leap year");
}
     
    return 0;
}