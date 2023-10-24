#include<iostream>
using namespace std;

class point{ 
    private:
    float x,y;
    public:
    point(float x,float y):x(x),y(y){
    }
    void deplace(float dx,float dy){
        x=x+dx;
        y=y+dy;
    }
    void afficher(){
        cout<<"les coordonnees sont :("<<x<<','<<y<<")\n";
    }
};

int main(){
    float a,b,dx,dy;
    cout<<"Entrer les coordonnees de A:\n";
    cin>>a;
    cin>>b;
    point A(a,b);
    A.afficher();
    cout<<"Enrer les donner de translation:\n";
    cin>>dx;
    cin>>dy;
    A.deplace(dx,dy);
    A.afficher();
    return 0;
}