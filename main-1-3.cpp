#include "Person.h"
#include <iostream>

int main(){
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);


PersonList pl = createPersonList(5);

PersonList copiedList = deepCopyPersonList(pl);

for(int i = 0; i < 5; i++){
std::cout << copiedList.people[i].age << " ";
std::cout << copiedList.people[i].name << "\n";
}

std::cout << copiedList.numPeople << "\n";

}