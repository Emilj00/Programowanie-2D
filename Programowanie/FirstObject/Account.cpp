#include "Account.h"
#include <stdexcept>

bool Account::IsPasswordMatching(std::string password) {
    return password == this->password;
}

bool Account::Transfer(double money, Account target)
{
    
}

Account::Account(std::string username, std::string password, std::string firstName, std::string lastName, unsigned int accountNumber) {
    this->username = username;
    this->password = password;
    this->firstName = firstName;
    this->lastName = lastName;
    this->accountNumber = accountNumber;
}

std::string Account::GetUsername() {
    return username;
}

std::string Account::GetFirstName()
{
    return firstName;
}

std::string Account::GetLastName()
{
    return lastName;
}

unsigned int Account::GetAccountNumber()
{
    return accountNumber;
}

void Account::Deposit(double money) {
    accountBalance += money;
}

double Account::Withdraw(double money) {
    if (accountBalance - money < 0) { 
        return 0.0;
    }

    accountBalance -= money;
    return money;
}

bool Account::Transfer(double money, unsigned int accountNumber)
{

}

bool Account::Transfer(double money, std::string username)
{
    
}

void Account::Info()
{
}

