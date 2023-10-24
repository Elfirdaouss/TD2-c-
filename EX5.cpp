#include<iostream>

int main(){
    int a;
    int *p_a = &a;
    int &ref_a = a;
    std::cout<<a<<'\n';
    std::cout<<&a<<"\n\n";

    std::cout<<&ref_a<<'\n';
    std::cout<<ref_a<<"\n\n";

    std::cout<<*p_a<<'\n';
    std::cout<<&p_a<<'\n';
    std::cout<<p_a<<"\n\n";

}