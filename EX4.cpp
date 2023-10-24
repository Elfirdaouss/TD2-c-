#include<iostream>
#include<cmath>

int main(){
    int size,*T1=NULL,*T2=NULL;
    std::cout<<"Enter the number of your elements:";
    std::cin>>size;
    T1=new int [size];
    T2=new int [size];
    std::cout<<"Enter elements of the table:";
    for(int i=0;i<size;i++){
        std::cin>>T1[i];
        T2[i]=pow(T1[i],2);
    }
    delete [] T1;
    std::cout<<"T2:"<<'\n';
    for(int i=0;i<size;i++){
        std::cout<<T2[i]<<'\n';
    }
    delete [] T2;
    return 0;
}