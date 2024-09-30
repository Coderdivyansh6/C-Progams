#include<stdio.h>

int main(){
// declareing the variables
    int num,rev=0,lastvalue;

// taking the user input
    printf("enter your number");
    scanf("%d",&num);

// performing the reverse operations
while(num > 0){
    lastvalue = num % 10;
    rev = rev * 10 + lastvalue;
    num = num / 10;
}

// printing the value after reverse
    printf("The value after reverse is %d",rev);
    return 0;
}
