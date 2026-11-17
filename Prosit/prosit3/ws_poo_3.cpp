#include <ostream>
#include <iostream>
#include <string>
using namespace std;
/* // Exercice 1, f) à finir 
class Vehicule {
    private : 
    double vitesse_max;
    double kilometrage;
    public : 
    Vehicule(){
        vitesse_max = 240;
        kilometrage = 0;
    }
    Vehicule(double vit, double kil){
        setvitesse(vit);
        setkilo(kil);
    }
    Vehicule(Vehicule &v){
        this->vitesse_max = v.getvitesse();
        this->kilometrage = v.getkilo(); 
    }

    double getvitesse(){
        return vitesse_max;
    }

    double getkilo(){
        return kilometrage;
    }

    void setvitesse(double vit){
        vitesse_max = vit;
        if (vit<200){
            vitesse_max = 240;
        }
        
    }
    void setkilo(double kil){
        kilometrage = kil;
        if (kil<0){
            kilometrage = 0;
        }
    }
};

class Bus : public Vehicule {
    private : 
    int capacite;
    public : 
    Bus(){
        Vehicule();
        capacite = 10;
    }
    Bus(double vit, double kilo, int capa){
        setvitesse(vit);
        setkilo(kilo);
        setcapacite(capa);
    }
    Bus(Bus &bus) : Vehicule(bus){
        this->capacite = bus.capacite;
    }

    int getcapacite(){
        return capacite;
    }
    void setcapacite(int capa){
        capacite = capa;
        if (capa<10||capa>50){
            capacite = 50;
        }
    }
    void afficher(){
        cout<<"Il s'agit d'un bus de capacite de " <<capacite 
        <<" places avec une vitesse maximale de "<< getvitesse()
        <<" kmh et son kilometrage est de "<<getkilo()<<" km"<<endl;
    }
};

class SchoolBus : public Bus 
{
private:
    string school_name;
public:
// constructeur
    SchoolBus(string sn){
        school_name = sn;
    }
// getter & setter
    void setSn(string n_sn){
        school_name = n_sn;
    }

    string getSn(){
        return school_name;
    }
    static int countbigbus(SchoolBus t[]){
        for(int i = 0,i : t,i++){
            if 
        }
    }
};


int main(){
    Vehicule v1(260,15000);
    Bus b1(210,2000,40);
    b1.afficher();

}
*/

//Exercice 2

class Piece {
    protected :
    int nb_windows;
    string color; 
    public : 
    Piece(){
        nb_windows = 0;
        color = "blanche";
    }
    Piece(int nb_wind, string col){
        set_windows(nb_wind);
        set_color(col);
    }
    Piece(Piece &piece){
        this->nb_windows = piece.get_windows();
        this->color = piece.get_color();
    }
    int get_windows(){
        return nb_windows;
    }
    string get_color(){
        return color;
    }
    void set_windows(int nb_wind){
        nb_windows = nb_wind;
    }
    void set_color(string col){
        color = col;
    }
    void affiche(){
        cout<<"la piece est "<<color<<" et a "<<nb_windows<<"fenetres"<<endl;
    }
};

class Maison {
    private : 
    listePieces l_pieces;
}