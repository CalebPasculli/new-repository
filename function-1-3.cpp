#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){

PersonList newList;

newList.numPeople = pl.numPeople;
newList.people = new Person[pl.numPeople];

for(int i = 0; i < pl.numPeople; i++){
newList.people[i].age = pl.people[i].age;
newList.people[i].name = pl.people[i].name;
}

pl.people[1].age = 17;


return newList;
}