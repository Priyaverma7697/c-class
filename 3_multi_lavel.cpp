#include <iostream>
using namespace std;
//multilavel
class school{
    
};
class coch: public school{
  public:  int a=10;
    void sum(){
        cout<<a;
    }
};
class student:public coch{
    
};
int main() {
    student o;
   cout<<o.a;
}
