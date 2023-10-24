#include<iostream>
#include<stack>
using namespace std;

class pile{
    private:
    int Num;
    pile *next;
    public:
    pile():Num(0),next(nullptr){
    }
    void push(int n){
        pile* New = new pile();
        New->Num = n;
        New->next = next;
        next = New;
    }
    void pop(){
        if(next==nullptr){
            cout<<"la liste est vide .";
        }
        else{
            pile* ptr = next;
            next = next->next;
            delete ptr;
        }

    }
    void afficher(){
        if(next==nullptr){
            cout<<"la pile est vide!!";
        }
        else{
            pile *ptr=next;
            while (ptr!=nullptr)
            {
                cout<<ptr->Num<<" ";
                ptr=ptr->next;
            }
            cout<<'\n';
        }
    }
};

int main(){
    
    stack<int> P2;
    P2.push(1);
    P2.push(2);
    P2.push(3);
    cout<<"dernier element est:"<<P2.top()<<'\n';
    P2.pop();
    cout<<"dernier element est:"<<P2.top()<<'\n';

    cout<<"\n\n*****USING CREATED CLASS*****\n";
    pile P1;
    P1.afficher();
    P1.push(5);
    P1.push(6);
    P1.push(7);
    P1.afficher();
    P1.afficher();
    cout<<"\npop\n";
    P1.pop();
    P1.afficher();

return 0;
}