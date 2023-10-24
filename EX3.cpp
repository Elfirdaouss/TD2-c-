#include<iostream>
#include<cmath>

int maxT(int T[]){
    int n=*T;
  for(int i=0;i<10;i++){
    n=__max(n,T[i]);
}  
return n;
}
int minT(int T[]){
    int x=*T;
  for(int i=0;i<10;i++){
    x=__min(x,T[i]);
}  
return x;
}

int main(){
int i,T[10],n,x;
std::cout<<"Enter the 10 nums of table:";
for(i=0;i<10;i++){
    std::cin>>T[i];
}
x=n=T[0];
for(i=0;i<10;i++){
    n=__min(n,T[i]);
    x=__max(x,T[i]);
}
std::cout<<"min is:"<<n<<'\n';
std::cout<<"max is:"<<x<<'\n'<<'\n';
//Methode 2:
std::cout<<"min is:"<<minT(T)<<'\n';
std::cout<<"max is:"<<maxT(T);
    return 0;
}