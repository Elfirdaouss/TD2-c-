#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d{
    public:
    float x,y,z;
    public:
    vecteur3d(float x,float y,float z):x(x),y(y),z(z){
    }
    void afficher(){
        cout<<"("<<x<<","<<y<<","<<z<<")\n";
    }
    vecteur3d somme(const vecteur3d &v){
        return vecteur3d(x + v.x,y + v.y,z + v.z);
    }
    int produit(vecteur3d (*v)){
    return x*(*v).x+y*(*v).y+z*(*v).z;
    }
    void coincide(vecteur3d v){
        if(v.x==x && v.y==y && v.z==z){
            cout<<"kes deux vecteurs coincide\n";
        }
        else
            cout<<"les deux vecteur ne coincid pas\n";
    }
    int norme(){
        return sqrt(x*x+y*y+z*z);
    }
    void normemax(vecteur3d v){
        if(norme()>v.norme()){
            cout<<"la norme de la 1er vecteur est plus la ground\n";
        }
        else if(norme()<v.norme()){
            cout<<"la norme de la 1er vecteur est plus petit\n";
        }
        else
            cout<<"les deux normes sont egaux";
    }
};


int main(){
    vecteur3d V1(1.5,2,3),V2(4,5,6);
    cout<<"V1";
    V1.afficher();
    cout<<"V2";
    V2.afficher();
    cout<<"la somme de V1 et V2 est: ";
    vecteur3d V3 =V1.somme(V2);
    V3.afficher();
    cout<<"le produit vectorial de V1 et V2 est:"<<V1.produit(&V2)<<'\n';
    V1.coincide(V2);
    cout<<"la norme de V1 est:"<<V1.norme()<<'\n';
    V1.normemax(V2);
    return 0;
}