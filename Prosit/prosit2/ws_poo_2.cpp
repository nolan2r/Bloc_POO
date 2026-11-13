#include <iostream>
/* //Partie 1 : 


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

/* // Partie 2 :  

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

// Partie 3 : 

#include<iostream>
#include<string>

#include <iostream>
#include <string>
using namespace std;

class Creature {
private:
    int pv;
    int pa;
    int niv;

public:
    static int compteur;

    Creature() {
        pv = 0;
        pa = 0;
        niv = 1;
        compteur +=1;

    }

    Creature(int pv, int pa, int niv) {
        setpv(pv);
        setpa(pa);
        setniv(niv);
        compteur +=1;

    }

    Creature(Creature &Creature1){
        this->pv = Creature1.getpv();
        this->pa = Creature1.getpa();
        this->niv = Creature1.getniv();
        compteur +=1;
    }

    ~Creature(){
        compteur -=1;
        cout <<"Creature detruite"<<endl;
    }

    void setpv(int a) { 
        pv = a; 
    }
    void setpa(int b) { 
        pa = b; 
    }
    void setniv(int c) { 
        niv = c; 
    }

    int getpv() { 
        return pv; 
    }
    int getpa() { 
        return pa; 
    }
    int getniv() { 
        return niv; 
    }

    void affiche() {
        std::cout << "créature niveau : " << niv << " pv : " << pv << " pa : " << pa << std::endl;
    }

    int attaque() {
        std::cout << "la créature a infligé : " << pa << " dégâts" << std::endl;
        return pa;
    }

    void subitDegat(int degat) {
        pv = pv - degat;
    }

    bool estVivant() {
        return pv > 0;
    }

    void afficher_compteur(){
        std::cout<<"compteur creature :"<<compteur<<std::endl;
    }
};

int Creature::compteur = 0;

class Heros {
private:
    std::string nom;
    int pv;
    int pa;

public:
    Heros() {
        nom = "";
        pv = 0;
        pa = 0;
    }

    Heros(std::string nom, int pv, int pa) {
        setnom(nom);
        setpv(pv);
        setpa(pa);
    }

    Heros(Heros &Heros1){
        this->nom = Heros1.getnom();
        this->pv = Heros1.getpv();
        this->pa = Heros1.getpa();

    }

    ~Heros(){}

    void setpv(int a) { 
        pv = a; 
    }

    void setpa(int b) { 
        pa = b; 
    }

    void setnom(std::string c) { 
        nom = c; 
    }

    int getpv() { return pv; }
    int getpa() { return pa; }
    std::string getnom() { return nom; }

    void affiche() {
        std::cout << "nom : " << nom << " pv : " << pv << " pa : " << pa << std::endl;
    }

    int attaque() {
        std::cout << "le héros a infligé : " << pa << " dégâts" << std::endl;
        return pa;
    }

    void subitDegat(int degat) {
        pv = pv - degat;
    }

    bool estVivant() {
        return pv > 0;
    }
};

void foo() {
    Creature c3;
    cout << "Nombre de créatures: " << Creature::compteur << endl;
}

void test1() {
    cout << "Test 1: \n";
    Creature c1;
    Creature c2(10, 2, 2);
    cout << "Nombre de créatures: " << Creature::compteur << endl;
    foo();
    cout << "Nombre de créatures: " << Creature::compteur << endl;
}

void bar(Creature c1) {
    Creature c2;
    cout << "Nombre de créatures: " << Creature::compteur << endl;
}

void test2() {
    cout << "Test 2: \n";
    Creature c1;
    Creature c2(10, 2, 2);
    cout << "Nombre de créatures: " << Creature::compteur << endl;
    bar(c2);
    cout << "Nombre de créatures: " << Creature::compteur << endl;
}

int main() {
    Creature c1;
    c1.setpv(100);
    c1.setpa(35);
    c1.setniv(5);

    Creature c2;
    c2.setpv(120);
    c2.setpa(40);
    c2.setniv(6);

    Heros h1;
    h1.setpv(70);
    h1.setpa(20);
    h1.setnom("batman");

    int d = h1.attaque();   // dégâts infligés par le héros
    int d2 = c1.attaque();  // dégâts infligés par la créature

    c1.subitDegat(d);       // la créature subit les dégâts du héros
    h1.subitDegat(d2);      // le héros subit les dégâts de la créature

    c1.affiche();
    h1.affiche();

    std::cout<<"compteur creature :"<<Creature::compteur<<std::endl;

    test1();
    test2();

    return 0;
}