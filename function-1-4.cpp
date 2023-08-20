#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){

PersonList newList;

newList = pl;
pl.people[1].age = 17;


return newList;
}