#include<iostream>
 using namespace std;
 class NumComplex{
    public:
    double ima,rel;
    char op;
};


int main(){
    NumComplex N1,N2;
    char op;
    double ima1,rel1,ima2,rel2;
    cout<<"la partie réelle et imaginaire du Num1:\n";
    cin>>N1.ima;
    cin>>N1.rel;
     cout<<"la partie réelle et imaginaire du Num2:\n";
    cin>>N2.ima;
    cin>>N2.rel;
    do{
    cout<<"choisir une operation:\n\t=:egalite\n\t+:additiond\n\t-:soustractiond\n\t*:multiplication\n\t/:division\n\telse to EXIT\n";
    cin>>op;
    }while(op!='='&&op!='+'&&op!='-'&&op!='*'&&op!='/');
    switch (op) {
    case '=':
        if(N1.rel==N2.rel && N1.ima==N2.ima){
            cout<<"les deux nombres sont egauxl.";
        }
            else
            cout<<"ils ne sont pas egax.";
        break;
    case '+':
        cout<<"la somme est: "<<N1.rel+N2.rel<<"+"<<N1.ima+N2.ima<<'i';
        break;
    case '-':
        cout<<"la somme est: "<<N1.rel-N2.rel<<"-"<<N1.ima-N2.ima<<'i';
        break;
    case '*':
        cout<<"la somme est: "<<N1.rel*N2.rel<<"*"<<N1.ima*N2.ima<<'i';
        break;
    case '/':
        cout<<"la somme est: "<<N1.rel/N2.rel<<"/"<<N1.ima/N2.ima<<'i';
        break;
    default:
        break;
    }
    return 0;
}