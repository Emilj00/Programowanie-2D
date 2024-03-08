#include <vector>
#include "Account.h"

class Bank {
    std::vector<Account*> accounts;

    Account* FindAccount(std::string username);
    Account* FindAccount(unsigned int accountNumber);

    bool IsUsernameUniqe(std::string username);
    bool IsAccountNumberUnique(unsigned int accountNumber);
public:
    Account* Login(std::string username, std::string password);
    void CreateAccount(std::string username, std::string password, std::string firstName, std::string lastName);
};
