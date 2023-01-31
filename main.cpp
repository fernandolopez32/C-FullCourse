#include <iostream>
// loading libs that we can use for example function to print out hello world
double addingDecimals(double first, double second){
        return first + second;
    }

// main function starting point of the c++ program
// code is executed in order top to bottom 
int main(){

    // endl is used to go to the next line in the terminal 
            // std:: cout << "Hello World!" << std:: endl;
            // std:: cout << "Number 1" << std:: endl;
            // std:: cout << "Number 2" << std:: endl;
    // printing out my name 10 times 
            // for(int i = 0; i < 10; i++){
            //                     // this is how you put a variable in a terminal log
            //     std:: cout << "Fernando Lopez" << std:: endl;
            // }
    // functions are writen out the same as java 
    

    std::cout << "The sum of these decimals is : " << addingDecimals(2.3,4.1)<< std::endl;

    // sometimes used to see if the whole program ran correctly
   return 0; 
}