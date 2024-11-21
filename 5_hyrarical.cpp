#include <iostream>
using namespace std;
class student{
  public:  int a=10;
    void sum(){
    cout<<a;
    }  
};
class coch : public student{
    
};
class school: public student{
    
};
int main() {
//   coch o;
//   cout<<o.a;
   school o;
   o.sum();
}
