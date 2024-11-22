//Types of polymorphism
//1. compile time polymorphism=> Function overloading.
//2. Runtime polymorphism=> Function overriding, object overloading.
//super class se subclass ko access kar sakta hai, without inharitance
//ek object se dono ko acces kar sakta hai
//Runtime polymorphism
#include<iostream>
using namespace std;
class a{
public: virtual void display(){
    cout<<"Hello Priya"<<endl;
}
public: void print(){
cout<<"Hello siya";
}
};
class b: public a{
public: void display(){
    cout<<"Hello Riya"<<endl;
}
public: void print(){
cout<<"Hello Tiya";
}
};
int main()
{
    a *ptrobj;
    b obj1;
    ptrobj=&obj1;
    ptrobj->display(); //late binding or dynamic binding
    ptrobj->print(); //static or early binding
}
//Normal function compile time per object se bind ho jate hai=static or early
//virtual function runtime per object se bind ho jate hai= late binding or dynamic binding