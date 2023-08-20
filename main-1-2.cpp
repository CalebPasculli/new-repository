#include "Person.h"
#include <iostream>

int main(){
extern PersonList createPersonList(int n);

PersonList result = createPersonList(5);

for(int i = 0; i < 5; i++){
std::cout << result.people[i].age << " ";
std::cout << result.people[i].name << "\n";
}

std::cout << result.numPeople << "\n";

}