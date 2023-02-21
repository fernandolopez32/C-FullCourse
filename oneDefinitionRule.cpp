#include <iostream> 
#include "person.h"
using namespace std;


// Variable : Declaration and definition 

// double weight{};

// double add(double a, double b){
//     return a+b;
// };

// struct Point 
// {
//     double m_x{0}; 
//     double m_y{0}; 
// };


int main(){


    // cout << weight << endl;

    // double result = add(10,20);
    // cout << "Result : " << result << endl;

    // Point p1; 
    // cout<< "p1.x : " << p1.m_x << " , p1.y : " << p1.m_y << endl;

    Person p1 ("John Snow" , 35);
    p1.print_info();

    return 0; 
}