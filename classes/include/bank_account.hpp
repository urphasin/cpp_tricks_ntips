#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class Account {
  private:
    std::string name;
    long long balance;
  public:
    // constructors
    Account(std::string name);

    // accessors
    const std::string& getName() const;
    long long getBalance() const;

    // mutators
    void setName(std::string name);

    // member functions
    void deposit(int money);


    // operator overload member functions
    
};
#endif