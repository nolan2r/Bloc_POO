
#include <iostream>
#include <string>
/*
class Date {
    public : 
    int j;
    int m;
    int a;

    void afficher(){
   
        std::cout <<j<<"/"<<m<<"/"<<a<<std::endl;
    }
    void incr(){
        if (j == 31) {
            j=1;
            m+=1;
            return;
        }
        if (j == 28 && m == 2){
            j=1;
            m=3;
            return;
        
        }
        if (j==30 && (m==4 ||m==6 ||m==9 ||m==11)){
            j=1;
            m+=1;
            return;
        }

        if (j == 31 && m == 12){
            j=1;
            m=1;
            a+=1;
            return;

        }
        j+=1;
    }
};

int main(){
    Date d1;
    std::cin>>d1.j;
    std::cin>>d1.m;
    std::cin>>d1.a;
    d1.afficher();
    d1.incr();
    d1.afficher();

}
*/

#include <cmath>
/*
//Partie : 1 
class Circle {
    //Position of the center
    public : 
    double x;
    double y;

    double r; // radius
// Set the position of the center
    void set_pos(double x1, double y1) {
    x = x1;
    y = y1;
    }

// Calculate the perimeter of the circle
    double perimeter() {
    return 2 * M_PI * r;
    }

    double area() {
    return M_PI * r * r;
    }

};

class Rectangle {
    public : 
    //Position of the top left corner
    double x;
    double y;

    double w; //width
    double h; //height  
// Set the position of the top left corner
    void set_pos(double x1, double y1) {
    x = x1;
    y = y1;
    }
// Calculate the perimeter of the rectangle
    double perimeter() {
    return 2 * (w + h);
    }
    double area() {
    return w*h;
    }
  
};


//TODO: Add a method to calculate the area of the circle



// TODO: Add a method to calculate the area of the rectangle


int main() {
    Circle c;
    c = {0, 0, 1};
    std::cout << c.perimeter() << std::endl;
    std::cout << c.area() << std::endl;

    c.set_pos(1, 1);
    std::cout << "Coordinates of the center: (" << c.x << ", " << c.y << ")" << std::endl;

    Rectangle r;
    r={0, 0, 1, 2};
    std::cout << r.perimeter() << std::endl;
    std::cout << r.area() << std::endl;

    r.set_pos(-1, -1);
    std::cout << "Coordinates of the top left corner: (" << r.x << ", " << r.y << ")" << std::endl;
    return 0;
}
*/
/*
// Partie 2 : 

#include <iostream>

using namespace std;


class Fraction {
    private :
    double num;
    double denum;

    public :
    Fraction(){
        num = 1;
        denum = 1;
    }
    
    Fraction (double n, double d){
        setnum(n) ;
        setdenum(d) ;
    }
    void setnum(double n){
        num=n;
    }

    void setdenum(double d){
        if (d!=0){
            denum = d;
        }
    }

    double getnum(){
        return num;
    }
    double getdenum(){
        return denum;
    }
    void afficher(){
    std::cout<<num<<"/"<<denum<<std::endl;
    }

    Fraction addition(Fraction f){
        Fraction S;
        S.setnum((num*f.getdenum())+(denum*f.getnum()));
        S.setdenum(denum*f.getdenum());
        return S;
    }

};

int main()
{   Fraction f;
    f.afficher();
    Fraction f2(1,0);
    f2.afficher();
    Fraction f3(15,13);
    f3.afficher();
    Fraction f4(25,96);
    Fraction f5;
    f5 = f3.addition(f4);
    f5.afficher();
    
    /*
    /* Test constructors 
    Fraction f0;
    if (f0.getNumerateur() == 1 && f0.getDenominateur() == 1) {
        cout << "[OK] Default constructor works" << endl;
    }
    else {
        cout << "[FAILURE] Default constructor doesn't work" << endl;
    }

    Fraction f1(1, 2);
    if (f1.getNumerateur() == 1 && f1.getDenominateur() == 2) {
        cout << "[OK] Constructor with parameters works" << endl;
    }
    else {
        cout << "[FAILURE] Constructor with parameters doesn't work" << endl;
    }

    Fraction f2(3, 4);

    /* Test add 
    Fraction f3 = f1.add(f2);

    if (f3.getNumerateur() == 10 && f3.getDenominateur() == 8) {
        cout << "[OK] Add method works" << endl;
    }
    else {
        cout << "[FAILURE] Add method doesn't work" << endl;
    }

    /* Test minus 
    f3 = f1.minus(f2);
    if (f3.getNumerateur() == -2 && f3.getDenominateur() == 8) {
        cout << "[OK] Minus method works" << endl;
    }
    else {
        cout << "[FAILURE] Minus method doesn't work" << endl;
    }

    /* Test multiply 
    f3 = f1.multiply(f2);
    if (f3.getNumerateur() == 3 && f3.getDenominateur() == 8) {
        cout << "[OK] Multiply method works" << endl;
    }
    else {
        cout << "[FAILURE] Multiply method doesn't work" << endl;
    }

    /* Test divide 
    f3 = f1.divide(f2);
    if (f3.getNumerateur() == 4 && f3.getDenominateur() == 6) {
        cout << "[OK] Divide method works" << endl;
    }
    else {
        cout << "[FAILURE] Divide method doesn't work" << endl;
    }
    return 0;

}
*/

// Partie 3 : 
#include<iostream>
#include<string>

class Creature {
    private :
    int pv;
    int pa;
    int niv;

    public : 
    Creature(){
        pv = pv;
        pa = pa;
        niv = niv;
    }

    Creature(int pv, int pa, int niv){
        setpv(pv);
        setpa(pa);
        setniv(niv);
    }

    void setpv(int a){
        pv=a;
    }
    void setpa(int b){
        pa=b;
    }
    void setniv(int c){
        niv=c;
    }

    int getpv(){
        return pv;
    }
    int getpa(){
        return pa;
    }
    int getniv(){
        return niv;
    }

    void affiche(){
        std::cout<<"créature niveau : "<<niv<<" "<<" pv : "<<pv<<" pa : "<<pa<<std::endl;
    }

    void attaque(){
        std::cout<<"la créature a inflige : "<<pa<<" degats"<<std::endl;

    }
    
    void subitDegat(int degat){
        pv = pv-degat;

    }

    int estVivant(){
        if (pv > 0) {
            return 1;
        }
        return 0;
    }
};

class Heros {
    private :
    char nom;
    int pv;
    int pa;

    public : 
    Heros(){
        nom = nom;
        pv = pv;
        pa = pa;
    }

    Heros(int pv, int pa, int niv){
        setnom(nom);
        setpv(pv);
        setpa(pa);
    }

    void setpv(int a){
        pv=a;
    }
    void setpa(int b){
        pa=b;
    }
    void setnom(char c){
        nom=c;
    }

    int getpv(){
        return pv;
    }
    int getpa(){
        return pa;
    }
    int getnom(){
        return nom;
    }

    void affiche(){
        std::cout<<"nom : "<<nom<<"pv : "<<pv<<"pa : "<<pa<<"\r\n"<<std::endl;
    }

    void attaque(){
        std::cout<<"le hero a inflige : "<<pa<<" degats"<<std::endl;

    }
    
    void subitDegat(int degat){
        pv = pv-degat;

    }

    int estVivant(){
        if (pv > 0) {
            return 1;
        }
        return 0;
    }
};



int main(){
    Creature c1;
    c1.setpv(100);
    c1.setpa(35);
    c1.setniv(5);

    Heros h1;
    h1.setpv(70);
    h1.setpa(20);
    h1.setnom("batman");

    
    c1.attaque();

    h1.attaque();

    d = h1.attaque();
    d2 = c1.attaque();
    
    h1.subitDegat(d);
    c1.subitDegat(d2);

    c1.affiche();
    h1.affiche();

    return 0;
}