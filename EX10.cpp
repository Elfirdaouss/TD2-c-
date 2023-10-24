#include<iostream>
using namespace std;
class Personne{
    private:
    string nom,prenom;
    int dat;
    public:
    Personne(string nom,string prenom,int dat):nom(nom),prenom(prenom),dat(dat) {
    }
    void afficher(){
        cout<<"nom:"<<nom<<"\nprenom:"<<prenom<<"\ndat naissance:"<<dat;
    }
};
class employe: public Personne {
    private:
    double salair;
    public:
    employe(string nom,string prenom,int dat,double salair):Personne(nom,prenom,dat),salair(salair) {
    }
    void afficher(){
        Personne::afficher();
        cout<<"\nsalair:"<<salair;
    }
};
class chef : employe{
    string Service;
    public:
    chef(string nom,string prenom,int dat,double salair,string Service):employe(nom,prenom,dat,salair),Service(Service) {
    }
    void afficher(){
        employe::afficher();
        cout<<"\nservice:"<<Service;
    }
};
class Directeur: chef{
    string societe;
    public:
    Directeur(string nom,string prenom,int dat,double salair,string Service,string societe):chef(nom,prenom,dat,salair,Service),societe(societe) {
    }
    void afficher(){
        chef::afficher();
        cout<<"\nsociete :"<<societe;
    }
};


int main(){
    Personne P("abdo","abdo",2000);
    employe E("said","said",1999,2000);
    chef C("hamid","hamid",1999,5000,"RH");
    Directeur D("ahmed","ahmed",1999,15000,"management","ABC company");
    P.afficher();
    cout <<"\n\n";
    E.afficher();
    cout <<"\n\n";
    C.afficher();
    cout <<"\n\n";
    D.afficher();
    return 0;
}