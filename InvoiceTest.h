// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-1);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }
    }
    void testDefualtConstructor();
    void testConstructor();
    // Add other test functions here
};
