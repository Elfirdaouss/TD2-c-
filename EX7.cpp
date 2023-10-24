#include<iostream>
using namespace std;

int main(){
    int T[10],i,tmp,count;
    cout<<"rempiler le tableau:\n";
    for(i=0;i<10;i++){
        cin>>T[i];}
    do{
        count=0;
        for(i=0;i<10;i++){
            if(T[i]>T[i+1]){
                tmp=T[i];
                T[i]=T[i+1];
                T[i+1]=tmp;
                count++;
            }
        }
    }while(count!=0);
    cout<<"le tableau trie:\n";
    for(i=0;i<10;i++)
        cout<<T[i]<<'\n';
    return 0;
}