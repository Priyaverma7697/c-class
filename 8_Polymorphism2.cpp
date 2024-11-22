//Runtime polymorphism
#include<iostream>
using namespace std;
class a{
public: virtual void display(){
    cout<<"Hello Priya"<<endl;
}
};
class b: public a{
public: void display(){
    cout<<"Hello Riya"<<endl;
}
};
int main()
{
    a *ptrobj;
    b obj1;
    ptrobj=&obj1;
    ptrobj->display();
}