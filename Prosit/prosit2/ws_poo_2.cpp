#include <iostream>

class BankAccount {
private :
    double balance;

public:
    BankAccount(double balance) : balance(balance) {}

    double getBalance() {
        return balance;
    }
    void setBalance(const double b){
        balance = b;
    }

    bool retirer(double retrait){
        if (retrait <= balance) {
            balance-=retrait;
            return true;
        }
        return false;
    }

    bool deposer(double depot){
        balance = balance+depot;
        return true;
        
    }

    void afficher(){
        std::cout << balance << std::endl;

    }

};

class Transaction {
private:
    BankAccount* from;
    BankAccount* to;
    double amount;

public:
    Transaction(BankAccount* from, BankAccount* to, double amount)
        : from(from), to(to), amount(amount) {}

    bool execute() {
        double res;
        res=from->retirer(amount);
        if (res) {
            to->deposer(amount);
            return true;
        }

        return false;
    }
};

int main() {
    BankAccount* account1 = new BankAccount(1000.0);
    BankAccount* account2 = new BankAccount(500.0);

    Transaction* transaction = new Transaction(account1, account2, 500.0);
    bool res = transaction->execute();
    if (res) {
        std::cout << "Transaction successful" << std::endl;
    } else {
        std::cout << "Transaction failed" << std::endl;
    }

    account1->afficher();
    account2->afficher();
    delete account1;
    delete account2;

    account1 = new BankAccount(1000.0);
    account2 = new BankAccount(500.0);
    transaction = new Transaction(account1, account2, 5000.0);

    res = transaction->execute();
    if (res) {
        std::cout << "Transaction successful" << std::endl;
    } else {
        std::cout << "Transaction failed" << std::endl;
    }

    std::cout << account1->getBalance() << std::endl;
    std::cout << account2->getBalance() << std::endl;

    return 0;
}