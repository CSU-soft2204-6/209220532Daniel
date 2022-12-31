//student.cpp
#include <iostream>
#include "student.h"

void Student::display() {
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

Student::Student(int num, char *name, char sex) {
    set_value(num, name, sex);




}

Student::Student(){
    set_value();

}


