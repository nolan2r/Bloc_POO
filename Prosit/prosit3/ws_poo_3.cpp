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
        vitesse_max = vit;
        kilometrage = kil;
    }
    Vehicule(Vehicule &v){
        this->vitesse_max = Vehicule.getvitesse();
        this->kilometrage = Vehicule.getkilo(); 
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