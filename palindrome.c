#include<stdio.h>

int main(){
// declareing the variable
    int num,rev=0,lastvalue;

// taking the user input
    printf("enter your number");
    scanf("%d",&num);

// assigning 
    
    int original = num; 

// performing the reverse operations
while(num > 0){
    lastvalue = num % 10;
    rev = rev * 10 + lastvalue;
    num = num / 10;
}

// Checking conditions to check palindrom
if(rev==original){
    printf("it is a palindrom number");
}

else{
    printf("it is not a palindrom number");
}
   
    return 0;
}