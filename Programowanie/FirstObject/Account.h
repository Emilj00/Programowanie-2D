#include <string>
#include <vector>
class Account {
    std::string username;
    std::string password;

    std::string firstName;
    std::string lastName;

    double accountBalance = 0.0;
    unsigned int accountNumber;

    bool Transfer(double money, Account target);
public:
    Account(std::string username, std::string password, std::string firstName, std::string lastName, unsigned int accountNumber);

    bool IsPasswordMatching(std::string password);

    std::string GetUsername();
    std::string GetFirstName();
    std::string GetLastName();

    unsigned int GetAccountNumber();

    void Deposit(double money);
    double Withdraw(double money);

    bool Transfer(double money, unsigned int accountNumber);
    bool Transfer(double money, std::string username);

    void Info();
};