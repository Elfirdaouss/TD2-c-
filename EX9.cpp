#include<iostream>
using namespace std;
class animal{
    public:
    std::string nom;
    int age;
    void set_value(std::string nom,int age){
        this->age=age;
        this->nom=nom;
    }
};
class zebra: public animal{
    public:
    void getInfo(){
        cout<<"* This zebra is named:"<<nom<<"\n  He has "<<age<<"years old \n  He is from the savan\n\n";
    }
};
class dolphin: public animal{
    public:
    void getInfo(){
        cout<<"* This zebra is named:"<<nom<<"\n  He has "<<age<<"years old \n  He is from Ocan Atlantique\n";
    }
};

int main(){
    zebra z;
    dolphin d;
    z.set_value("Ziggy", 10);
    d.set_value("Dolly", 20);

    z.getInfo();
    d.getInfo();
    return 0;
}