#include<stdio.h>

int main(){
// Declareing the variables
    int i,num,count=0;

// taking the user input
    printf("Enter the number : ");
    scanf("%d",&num);

// using for loop 
for(int i=2; i<=num; i++){
    if(num%i==0){
      printf("%d\n",i);
      count++;
    }
}

// using if condition to check prime
 if(count==1){
    printf("%d is a prime number");
 }
 else{
    printf("%d is not a prime number");
 }
    return 0;
}
    