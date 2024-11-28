//This code demonstrates the basic principles of object-oriented programming (OOP)
//in C++, including encapsulation (hiding data within the class)
//and abstraction (exposing only necessary information through public member functions).
// question ==
// "What is the output of the given C++ program when an object of the class 'Riya' is created?"
#include<iostream>
using namespace std;
class riya{
    int y;
    public:riya(int x){
        y=x;
    }
    void show(){
        cout<<y;
    }
};
int main(){
    riya o(10);
    o.show();
}