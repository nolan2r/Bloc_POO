#include <iostream>
/* 
//Partie 1 : 

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
*/

// Partie 2 :  

#include <iostream>
using namespace std;

class Creature {
public:
    Creature() {} // Constructeur par défaut sans paramètre
    Creature(const Creature &c) {
        // Constructeur par copie
        cout << "A creature has been duplicated" << endl;
    }
    ~Creature() {
        // Destructeur
        cout << "A Creature has been destroyed" << endl;
    }
};

Creature foo(Creature &c) {
    cout << "foo" << endl;
    Creature local = c;
    return c;
}

int main(int argc, char const *argv[])
{
    Creature ogre;
    cout << "before foo" << endl;
    Creature shrek = foo(ogre);
    cout << "after foo" << endl;
    return 0;
}

/*
Code 1 : Passage par valeur

Resultat : 
A creature has been duplicated
before foo
A creature has been duplicated
foo
A Creature has been destroyed
after foo
A Creature has been destroyed
A Creature has been destroyed


Code 2 : Passage par reference

Resultat : 
before foo
foo
A creature has been duplicated
A Creature has been destroyed
after foo
A Creature has been destroyed


Code 3 : Passage par pointeur

Resultat : 
A creature has been duplicated
before bar
bar
A Creature has been destroyed
after bar
A Creature has been destroyed


Code 4 : Passage par reference

Resultat : 
before foo
foo
A creature has been duplicated
A creature has been duplicated
A Creature has been destroyed
after foo
A Creature has been destroyed
A Creature has been destroyed

Avec le passage par valeur, on crée une copie de l'objet et on agit sur la copie

Avec le passage par référence, on agit directement sur l'objet en passant par son adresse.


*/
