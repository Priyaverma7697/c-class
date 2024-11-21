#include <iostream>
using namespace std;
class school{
    
};
class coch{
public:  int a=10;
    void sum(){
    cout<<a;
    }
};
class student:public school, public coch{
    
};
int main() {
   student o;
   cout<<o.a;
}
