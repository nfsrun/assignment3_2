// Name         : BarberShop.h
// Modified     : Kevin Tran
// Version      : 1.00 -- Initial Commit.
// Description  : BarberShop.h class defines what an BarberShop instance is in the barber shop
// program and has two methods that would add and remove a customer from the
// program's s1 stack. s2 is an auxiliary stack that helps keep customers in
// order upon taking the nextCustomer from the stack (s1).

#ifndef ASSIGNMENT3_2_BARBERSHOP_H
#define ASSIGNMENT3_2_BARBERSHOP_H

//BarberShop.h
#include <iostream>
#include "Customer.h"
#include "LinkedStack.h"

using namespace std;

//class definition as defined by assignment.
class BarberShop {
    LinkedStack<Customer> s1;
    LinkedStack<Customer> s2;
public:
    void addCustomer(Customer&);
    Customer nextCustomer();
};

//addCustomer method adds a customer to the LinkedStack s1.
void BarberShop::addCustomer(Customer &customer) {
    this->s1.push(customer);
}

//nextCustomer method outputs the next customer by popping the "first-est" one
//out.
Customer BarberShop::nextCustomer() {

    //if it is not empty
    if (!s1.isEmpty()) {
        //first pop all customers to the other stack.
        while (!this->s1.isEmpty()) {
            Customer p = this->s1.pop();
            this->s2.push(p);
        }

        //then get the first-most customer out and remember him or her.
        Customer c = this->s2.pop();

        //pop out of the secondary stack and push back into the first stack just
        //so it goes back to where it belongs.
        while (!this->s2.isEmpty()) {
            Customer p = this->s2.pop();
            this->s1.push(p);
        }
        return c;
    }
}

#endif //ASSIGNMENT3_2_BARBERSHOP_H
