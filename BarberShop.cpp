// Name         : BarberShop.cpp
// Author       : Kevin Tran
// Version      : 1.00 -- Initial Commit.
// Description  : BarberShop.cpp class has a main method that runs the default program.

#include "BarberShop.h"

using namespace std;

//main method that was provided in instructions are listed here.
int main(){
    BarberShop shop;
    Customer customer1("MARK","KILGORE");
    Customer customer2("RICK","GRIMM");
    shop.addCustomer(customer1);
    shop.addCustomer(customer2);
    Customer nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;
    Customer customer3("JILL","WOLFF");
    shop.addCustomer(customer3);
    nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;
    nextCustomer = shop.nextCustomer();
    cout<<nextCustomer.getName()<<" is served next"<<endl;
}