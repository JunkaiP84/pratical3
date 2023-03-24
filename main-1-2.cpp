#include <iostream>
#include "Person.h"

int main() {
    PersonList list=createPersonList(5);
    for (int i=0; i<list.numPeople; i++) {
        std::cout<<"Name:"<<list.people[i].name<<", Age: "<<list.people[i].age<<std::endl;
    }
    delete[] list.people;

    return 0;
}
