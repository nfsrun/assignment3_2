// Name         : Customer.h
// Modified     : Kevin Tran
// Version      : 1.00 -- Initial Commit.
// Description  : Customer.h class defines what a customer is and has functions
// related to output of a customer.

#ifndef ASSIGNMENT3_2_CUSTOMER_H
#define ASSIGNMENT3_2_CUSTOMER_H

#include <iostream>
using namespace std;

class Customer {
    string first_name, last_name;
public:
    Customer(string = "", string = "");
    string getName();
    friend ostream& operator<<(ostream&, Customer);
};

//default constructor
Customer::Customer(string first, string l){
    this->first_name=first;
    this->last_name=l;
}

//getName method returns the name of the customer explicitly.
string Customer::getName(){
    return this->first_name + " " + this->last_name;
}

//operator overload << to output name of customers using the getName()
//function.
ostream& operator<<(ostream& os, Customer c) {
    return os<<c.first_name<< " " <<c.last_name;
}

#endif //ASSIGNMENT3_2_CUSTOMER_H
