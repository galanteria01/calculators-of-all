#include<stdio.h>

int main(){
    printf("Welcome to C calculator");
    int num1,num2,choice;
    char *choices[4] = {"Addition","Substraction","Multiplication","Division"}; 

    printf("Enter the number 1");
    scanf("%d",&num1);
    printf("Enter the number 2");
    scanf("%d",&num2);

    printf("Enter your choice");
    for(int i = 0;i<4;i++){
        printf(choices[i]);
    }
    scanf("%d",&choice);
    if(choice == 1){
        printf("The sum is %d", num1+num2);
    }else if(choice == 2){
        printf("The difference is %d", num1-num2);
    }else if(choice == 3){
        printf("The product is %d", num1*num2);
    }else if(choice == 4){
        printf("The quotient is %d", num1/num2);
    }



}