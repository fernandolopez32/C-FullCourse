// #ifndef PERSON_H
// #define PERSON_H

// #include <iostream>

// class Person {
//     public: 
//     Person(const std::string& name_param, int age_param);

//     void print_info()const{
//         std:: cout << "name : " << full_name << ", age : " << age << std::endl;
//     }
//     private : 
//         std:: string full_name;
//         int age;
//     public : 
//         //static variable declaration
//         static int person_count;

//         Person (const std::string& name_param, int age_param)
//         : full_name{name_param}, age{age_param}{
//             ++person_count;
//         }
// };

// #endif // PERSON_H

//chat gpt way

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    int age;
    std::string name;

public:
    // Constructor with parameters
    Person(int a, std::string n) {
        age = a;
        name = n;
    }

    // Method to print the age and name
    void print_info() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

#endif