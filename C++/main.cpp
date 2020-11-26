#include<iostream>

int main(){
    std::cout << "Welcome to the C++ Calculator" << std::endl;
    int num1,num2,choice;
    const char *choices[4] = {"Addition","Substraction","Multiplication","Division"}; 
    std::cout << "Enter the Number 1" << std::endl;
    std::cin >> num1;
    std::cout << "Enter the Number 2" << std::endl;
    std::cin >> num2;
    for(int i = 0;i<4;i++){
        std::cout << choices[i] << std::endl;
    }
    std::cout << "Enter the choice" << std::endl;
    std::cin >> choice;
    if(choice == 1){
        std::cout << "The sum is " << num1+num2 << std::endl;
    }else if(choice == 2){
        std::cout << "The difference is " << num1-num2 << std::endl;
    }else if(choice == 3){
        std::cout << "The product is " << num1*num2 << std::endl;
    }else if(choice == 4){
        std::cout << "The quotient is " << num1/num2 << std::endl;
    }

    return 0;

}