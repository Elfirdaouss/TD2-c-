#include<iostream>
using namespace std;

class Test{
    public:
    void call(){
        static int i=0;
        i++;
        cout<<"Num de fois est:"<<i<<'\n';
    }
};

int main(){
    Test test;
    test.call();
    test.call();
    test.call();
    test.call();
    test.call();
    return 0;
}