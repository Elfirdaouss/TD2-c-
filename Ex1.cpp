#include<iostream>

void numApp(){
static int i=0;
i++;
std::cout<<"appel numero:"<<i<<'\n';
}
int main(){
numApp();
numApp();
numApp();
numApp();
return 0;
}