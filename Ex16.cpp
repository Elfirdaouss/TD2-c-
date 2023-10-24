#include<iostream>
using namespace std;

class liste{
    private:
    int num;
    liste *firstEle;
    public:
    liste() : num(0), firstEle(nullptr) {
    }
    void ajouter(int n){
        liste* New=new liste();
        New->num=n;
        if(firstEle==nullptr){
            firstEle=New;
        }
        else{
            liste *ptr=firstEle;
            while (ptr->firstEle!=nullptr)
            {
                ptr=ptr->firstEle;
            }
            ptr->firstEle=New;
            
        }
    }
    void suppremr(){
        if(firstEle==nullptr){
            cout<<"la liste est vide\n";
        }
        else{
            liste *ptr=firstEle;
            firstEle =firstEle->firstEle;
            delete ptr;
        }
    }
    void afficher(){
        if(firstEle==nullptr){
            cout<<"la liste est vide\n";
        }
        else{
            liste *ptr=firstEle;
            while (ptr!=nullptr)
            {
                cout<<ptr->num<<' ';
                ptr=ptr->firstEle;
            }
        }
    }
};

int main(){

    liste L;
    L.suppremr();
    L.ajouter(1);
    L.ajouter(2);
    L.afficher();
    L.suppremr();
    L.afficher();
    return 0;
}