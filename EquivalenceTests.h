// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testBigPos();
        testBigNeg();
        testSpecialCase();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    void testBigPos(){
        Addition addition;
        if (addition.add(1000, 1000) != 2000){
            std::cout << "Large positive failed!" << std::endl;
        }
    }
    void testBigNeg(){
        Addition addition;
        if (addition.add(-1000, -1000) != -2000){
            std::cout << "Large negative failed!" << std::endl;
        }
    }
    void testSpecialCase(){
        Addition addition;
        if (addition.add(-1, 1) != 0){
            std::cout << "Special case failed!" << std::endl;
        }
    }
};