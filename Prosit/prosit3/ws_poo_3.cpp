using namespace std;

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
        vitesse_max = 240;
        kilometrage = 0;
        capacite = 10;
    }
    Bus(double vit, double kilo, int capa){
        setvitesse(vit);
        setkilo(kilo);
        setcapacite(capa);
    }
    Bus(Bus &bus){
        this->vitesse_max = bus.getvitesse();
        this->kilometrage = bus.getkilo();
        this->capacite = bus.getcapacite();
    
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
        cout<<"vitesse max : "<< vitesse_max<<"\nkilometrage : "
        <<kilometrage<<"\ncapacite : " <<capacite << endl;
    }
};

