#include "Bank.h"

Account* Bank::FindAccount(std::string username) {
    for (Account* account : accounts) {
        if (account->GetUsername() == username) {
            return account;
        }
    }

	return nullptr;
}

Account* Bank::FindAccount(unsigned int accountNumber) {
    for (Account* account : accounts) {
        if (account->GetAccountNumber() == accountNumber) {
            return account;
        }
    }

    return nullptr;
}

bool Bank::IsUsernameUniqe(std::string username) {
    return FindAccount(username) == nullptr;
}

bool Bank::IsAccountNumberUnique(unsigned int accountNumber) {
    return FindAccount(accountNumber) == nullptr;
}

Account* Bank::Login(std::string username, std::string password) {
    Account* account = FindAccount(username);
    if (account != nullptr && account->IsPasswordMatching(password)) {
        return account;
    }

    return nullptr;
}

void Bank::CreateAccount(std::string username, std::string password, std::string firstName, std::string lastName) {
    if (!IsUsernameUniqe(username)) {
        return;
    }
    
    srand(NULL);
    int newAccountNumber = 0;
    do {
        newAccountNumber = rand();
    } while (IsAccountNumberUnique(newAccountNumber));

    Account* account = new Account(username, password, firstName, lastName, newAccountNumber);
    accounts.push_back(account);
}
