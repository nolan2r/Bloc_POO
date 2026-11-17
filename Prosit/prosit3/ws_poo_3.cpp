#include <ostream>
#include <iostream>
#include <string>
#include <list>
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
    /*Piece(Piece const &piece){
        this->nb_windows = piece.get_windows();
        this->color = piece.get_color();
    }*/
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
    virtual bool is_Salle_de_bain(){
        return false;
    }
    virtual bool is_Chambre(){
        return false;
    }
};

class Salle_de_bain : public Piece {
    private :
    bool has_shower;

    public :
    Salle_de_bain(){
        nb_windows = 0;
        color = "blanche";
        has_shower = false;
    }
    Salle_de_bain(int nb_wind, string col, bool shower){
        Piece(nb_wind,col);
        set_shower(shower);
    }
    bool get_shower(){
        return has_shower;
    }
     void set_shower(bool show){
        has_shower = show;
    }
    bool is_Salle_de_bain() override{
        return true;
    }
};

class Chambre : public Piece {
    private :
    int nb_lits;

    public :
    Chambre(){
        Piece();
        nb_lits = 1;
    }
    Chambre(int nb_wind, string col,int lit){
        Piece(nb_wind,col);
        set_lit(lit);

    }
    bool get_lit(){
        return nb_lits;
    }
    void set_lit(int lit){
        nb_lits = lit;
    }
    bool is_Chambre() override{
        return true;
    }
};


class Maison {
    private : 
    list<Piece*> l_pieces;

    public : 
    Maison(){    
    }
    void ajoute_piece(Piece* p){
        l_pieces.push_back(p);
    }

    int get_nb_salle_de_bain() {
        int compteur_s=0;
        for (Piece *piece : l_pieces){
        if (piece->is_Salle_de_bain()){
            compteur_s+=1;
        }
    }
        return compteur_s;
    }

    int get_nb_chambre() {
        int compteur_c=0;
        for (Piece *piece : l_pieces){
        if (piece->is_Chambre()){
            compteur_c+=1;
        }
    }
    return compteur_c;
    }
};

int main(){
    Maison m1;
    Piece *b1 = new Salle_de_bain();
    Piece *b2 = new Salle_de_bain(2,"noir",true);
    Piece *c2 = new Chambre();
    m1.ajoute_piece(b1);
    m1.ajoute_piece(b2);
    m1.ajoute_piece(c2);

    cout<<m1.get_nb_salle_de_bain()<<endl;
    cout<<m1.get_nb_chambre()<<endl;

    }


    