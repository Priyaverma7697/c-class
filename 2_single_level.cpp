#include <iostream>
using namespace std;
class coch{
public: int a=10;
    void sum(){
        cout<<a;
    }
};
class school{
    
};
class student:public coch{
    
};

int main() {
   student o;
   cout<<o.a;

}
