// "What is the output of the given C++ program when it performs operator overloading for the '+' operator?"
#include<iostream>
using namespace std;
class a{
int y;
public: a(int x=0){
    y=x;
}
a operator+(a obj){
    a temp;
    temp.y=y+obj.y;
    return temp;
}
void show(){
    cout<<y;
}
};
int main()
{
   a obj1(10);
   a obj2(13);
   a obj3;
   obj3=obj1+(obj2);
   obj3.show(); 
}