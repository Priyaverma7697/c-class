#include<iostream>
using namespace std;
class a{
int x;
public: a(int y){
x=y;
}
void show(){
    cout<<x;
}
};
int main()
{
    a obj(10);
    a obj1(obj);
    obj1.show();
    return 0;
}