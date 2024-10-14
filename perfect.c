#include<stdio.h>

int main(){
 
// Declaring the variable

   int num , sum=0, i;

// Taking user input

   printf("enter your number : ");
   scanf("%d",&num);

// using loops
printf("Factors of %d are :\n",num);
for(i = 1; i < num; i++){
    if(num % i == 0){
        printf("%d\n",i);
        sum = sum + i;

    }
}

// Checking conditions for perfect

if( num == sum ){

    printf("%d is a perfect number",num);

}

else{

    printf("%d is not a perfect number",num);

}

return 0;
}