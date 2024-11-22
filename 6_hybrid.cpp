#include<iostream>
using namespace std;
class a{
    public: void display(){
        cout<<"Hello";
    }

};
class b{

};
class c: public a, public b{

};
int main()
{
    c obj;
    obj. display();
}