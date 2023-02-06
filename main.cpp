/* 
If you are reading you need to know the comment structure--->

    //things commented at this indentation are notes to myself or word problems that I decided to solve

            //any comment at this indentatino is the solution to the given problem
        

*/





// standard libs 
#include <iostream>
// loading libs that we can use for example function to print out hello world
#include <string>


using namespace std;

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
    
//store the sum in a variable and print out that variables vallue

            // double sum = addingDecimals(3.14, 3.43);

            // std::cout << "First sum : " << sum << std::endl;

            // std::cout << "The sum of these decimals is : " << addingDecimals(2.3,4.1)<< std::endl;

// this is how you write an array 
            // int myArray[5] = {1,2,3,4,5};
            // std::cout << "this is array at index number two: " << myArray[2]<< std::endl;


// write a application in the terminal to have a conversation with.
            string userResp;

            // cin>> userResp;      
            // cout << userResp << endl;

            do 
            {
                 std:: cout << "hey looser" << std::endl;
                 std:: cin >> userResp;
                 cout << userResp <<  endl;
            }
            while (userResp != "bye");
    


// sometimes used to see if the whole program ran correctly
   return 0; 
}