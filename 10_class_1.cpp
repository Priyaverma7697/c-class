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