#include "Person.h"
#include <iostream>

int main(){
extern Person* createPersonArray(int n);

Person * result = createPersonArray(5);

for(int i = 0; i < 5; i++){
std::cout << result[i].name << " ";
std::cout << result[i].age << "\n";
}
}