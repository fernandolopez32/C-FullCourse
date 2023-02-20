/* 
If you are reading you need to know the comment structure--->

    //things commented at this indentation are notes to myself or word problems that I decided to solve

            //any comment at this indentatino is the solution to the given problem
        

*/





// standard libs 
#include <iostream>
// loading libs that we can use for example function to print out hello world
#include <string>

#include <string_view>

#include <cmath>

#include <array>

#include <iterator>



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


// auto asigner 

            // auto character = 'a';

            // auto integer = 2;

            // auto decimalNumber = 2.3;

            // auto words = "a string of words";


//pointers
    
// zeo means NULL you cannot read or write to this pointer
            // void* ptr = 0;

            // int var = 8; 
            // void* ptr = &var;
            // std::cin.get();

// unsignee int value 
// allocating the memory for negative and positive numbers

            // unsigned int value4 {4};

// booleans in c++ 

            // bool redLight ={true};
            // bool greenLight ={false};

            // if(redLight == true){
            //     std::cout<<"Stop!!"<< std:: endl;
            // }else{
            //     std::cout<< "GO!" << std:: endl;
            // }

            // if(greenLight){
            //     cout << "the light is green" << endl;
            // }else{
            //     cout <<"the light is not green" << endl;
            // }

// char is for single letters 

            // char char1 = 'a';
            //     cout << char1 << endl;

// // asign ASCII code to a variable

            // char value = 65; // ASCII character code for A
            // cout << "value : " << value << endl;
            // cout << "value(int) : " << static_cast<int>(value) << endl;



// value incrementation and decremantation via suffix implementation

            // int val = 5; 
            // cout << val++ << endl;
            // cout << val << endl;

            // cout << val-- << endl;
            // cout << val << endl; 

// preffix value incrementation and decremantation


            // int val1 = 5;

            // ++val1;
            // cout<< val1 << endl;

            // cout << --val1 << endl; 

    // compound asignment operators 

            // int val = 32;
            // cout<< val << endl;
            // val +=5; 
            // cout<< val <<endl;
            // val-=5;
            // cout<< val <<endl;
            // val *=5;
            // cout<< val <<endl;
            // val/=5;
            // cout<< val <<endl;


// math functions (NOW INCLUDING <CMATH>)

            // int  neg = -3000;
            // cout << abs(neg) << endl;
            // cout << "2^4" << pow(2,4) << endl;
            // cout << "square root " << sqrt(64) << endl;


// switch statements 


            // const int pen = 1;
            // const int marker = 2;
            // const int eraser = 3;
            // const int rectange = 4;
            // const int circle = 5;

            // int tool = pen;
            // switch (tool)
            // {
            //     case pen: 
            //     {
            //         cout << "active tool is pen" << endl; 
            //     }
            //         break;
            //     case marker: 
            //     {
            //         cout << "active tool is marker" << endl;
            //     }
            //         break;
            //     case eraser: 
            //     {
            //         cout << "active tool is erase" << endl;
            //     }
            //         break;
            //     case rectange:
            //      {
            //         cout << "active tool is rectangle" << endl; 
            //     }
            //     case circle: 
            //     {
            //         cout << "active tool is circle" << endl; 
            //     }
            //         break;
            //     default: 
            //     {
            //         cout << "NO TOOL FOUND" << endl;
            //     }
            // }


// ternary operators 

            // int max; 
            // // types must be of the same type or convertible 
            // int a = 25;
            // int b = 50;

            // max = (a > b) ? a : b;

            // cout<< "max is: "<< max << endl;


// starting arrays lecture 

        // to declare an array you must specify the array type, give it a name and specify the size
            // int scores [10];// an array storing 10 integers 

// asigning values 

            // scores[0] = 10;
            // scores[1] =20;
            // scores[2] =30;

            // cout << "scores [0]" << scores[0] << endl;


// looping through the array 

            // for ( size_t i = {0}; i < 10; i++){
            //     cout << "scores[" << i << "] :" << scores[i] << endl;
            // }

// declaring and putting data into an array at the same time 

            // double salaries[5] = {29.2, 23.5, 48.2, 10.4, 12.5};

            // cout << salaries[0]<< endl;
            // for(size_t i = {0}; i < 5; i++){
            //     cout<<"salary["<<i<<"]: "<< salaries[i] << endl;
            // }

// omit size of an arry 

                //     int class_sizes[] = {10, 23, 12, 15,11,15,17,18};

                //     for(int value :class_sizes){
                //         cout << "value: " << value << endl;
                //     }

                //     int scores [10];

                //     cout <<"scores at [0]"<< scores[0] << endl;

                //     for(auto element: scores){
                //         cout<< element*10 << endl;
                //     }
// querry for the size of an array 

                // int scores [] {1,2,3,4,5,6,7,8,9,10};

                // int count { size(scores)};

                // for(size_t i{0}; i < count ; ++i){
                // cout<<"scores[" << i << "]" << scores[i] << endl;
                // }


                // cout<< "scores size: " <<   std::size(scores) << endl;
                // // cout << "scores size: " << sizeof(scores) / sizeof(scores[0]) << endl;

// char messeges 
                // // needs a null termination character to know when to stop 
                // char message1 []{'H','e','l','l','o','\0'};

                // cout << "message1 : " << message1 << endl;
                // cout << "size = " << size(message1)<< endl;


// pointers in c++ 

                //declaring pinters 
                // pointers only store address to varaibles 
                int * pInteger {}; // can only store an address of a variable of type int
                cout << sizeof(pInteger)<<  " <----size of pionter // size of integer ----> " << sizeof(int) << endl;

                double * pDouble{}; // can only store an address of a variable of type double
                cout << sizeof(pDouble)<<  " <----size of pionter // size of double ----> " << sizeof(double) << endl;

                // explicitely initilize to nullptr

                // int * pInt {nullptr};

                double * pDub{nullptr};

                // initilizing pionter and assigning them data 

                // pointers store addresses of variables 

        int intVar {32};
        int* pInt {&intVar};// The address of operator(&)
        cout << "int var :" << intVar << endl;
        cout<< "pInt (address in memory) :" << pInt << endl;

        //you can also change the address stored in a pointer any time 
        int intVar1 {57};
        intVar1 = 124;

        pInt = &intVar1; // assign a different address to the pointer 
        cout << "pInt (with different address) :" << pInt << endl;


 



// write a application in the terminal to have a conversation with.
           std:: string* userResp;

            // do{
            //     std::cout << "Start..." << std::endl;
            //     // this line bellow gets the input of the line in the terminal and stores it in the variable called userResp
            //     std::getline(std::cin, *userResp);

            //     if(userResp){
            //         std::cout << userResp << std::endl;
            //     }

                
            //     std::cout << *userResp + " is what you said. " << std::endl;

            // }
            // while (*userResp != "bye");
            
            

            // do 
            // {
            //      std:: cout << "Ask me a question bro... " << std::endl;
                 
                 
            //      std::getline(std::cin, userResp);

            //      if(userResp == "How are you?")
            //      {
            //         cout << "What?" << endl;
            //      }
                 
                 
            //      cout << userResp <<  endl;
            // }
            // while (userResp != "bye");
    


// sometimes used to see if the whole program ran correctly
   return 0; 
}