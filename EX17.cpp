#include<iostream>
#include<string>
using namespace std;

int main(){
    string DH,tmp;
    int day,month,year,H,min;
    cout<<"Entrer la date et l'heure:";
    cin>>DH;
    day=stoi(DH.substr(0,2));
    cout<<day<<'/';
    month=stoi(DH.substr(2,2));
    cout<<month<<'/';
    year=stoi(DH.substr(4,4));
    cout<<year;
    H=stoi(DH.substr(8,2));
    cout<<' '<<H<<':';
    min=stoi(DH.substr(10,2));
    cout<<min;

    return 0;
}