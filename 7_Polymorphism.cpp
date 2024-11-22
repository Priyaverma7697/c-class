//compile time Polymorphism
#include<iostream>
using namespace std;
class a{
public: void display(){
    cout<<"Hello Priya"<<endl;
}
};
class b: public a{
public: void display(){
    cout<<"Hello Riya"<<endl;
}
};
int main(){
 b obj;
obj.display();
obj.a::display();
}