// INHARITANCE==> class ko inharit karna
#include<iostream>
using namespace std;
class ankit{
protected: int a=10;
void display(int number){
cout<<number;
}
};
class sandy: public ankit{
public: void display(int number){
cout<<number;
cout<<a;
}
};
int main()
{
    sandy o;
    o.display(12);
    return 0;
} 
