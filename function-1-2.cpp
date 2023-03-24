#include "Person.h"

Person createPersonList(int n) {
    Person* people=new Person[n];
    for (int i=0; i<n; i++) {
        people[i].name="Jane Doe";
        people[i].age=1;
    }
    
    PersonListlist={people, n};

    return list;
}
