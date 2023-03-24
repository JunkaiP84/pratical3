#include <iostream>
#include "Person.h"

int main() {
    int n=7;
    Person*arr=createPersonArray(n);
    for (int i=0; i<n; i++) {
        std::cout<<"Person"<<i+1<<": "<<arr[i].name<<", "<<arr[i].age<<std::endl;
    }
    delete[] arr;

    return 0;
}
