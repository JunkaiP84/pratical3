#include "Person.h"

Person* createPersonArray(int n) {
    Person* arr=new Person[n];
    for (int i=0; i<n; i++) {
        arr[i].name="John Doe";
        arr[i].age=0;
    }

    return arr;
}
