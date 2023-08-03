#include <iostream>
#include <string>
int main(){

extern void print_binary_str(std::string decimal_number);

    std::string decimal_number = "78";

print_binary_str(decimal_number);

return 0;
}