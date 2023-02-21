#include <iostream> 

using namespace std;


// Variable : Declaration and definition 

double weight{};

double add(double a, double b);


int main(){

    // cout << weight << endl;

    double result = add(10,20);
    cout << "Result : " << result << endl;


    return 0; 
}
double add(double a, double b){
    return a+b;
}