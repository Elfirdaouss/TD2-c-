#include<iostream>
using namespace std;
void incrementer(int &n){
    (n)++;
}
void permuter(int &x,int &y){
int tmp;
tmp=x;
x=y;
y=tmp;
}

int main(){
int x,y;
cout<<"Entrer X et Y:";
cin>>x;
cin>>y;
incrementer(x);
incrementer(y);
cout<<"incrementation: "<<'\n'<<"x="<<x<<'\n'<<"y="<<y<<'\n';
permuter(x,y);
cout<<"permutation :"<<'\n'<<"x="<<x<<'\n'<<"y="<<y;
    return 0;
}