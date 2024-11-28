// "What is the output of the given C++ program when it uses virtual functions and polymorphism?"
#include<iostream>
using namespace std;
class a{
int y=10;
public: virtual void show()=0;
void display(){
    cout<<y;
}
};
class b: public a{
    public:void show(){
        cout<<"I am priya";
    }
};
int main()
{
    // b obj;
    // obj.show();
    a *obj=new b();
    obj-> show();
    return 0;
}