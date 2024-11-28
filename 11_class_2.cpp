// The question is likely:
// "What is the output of the following C++ program?"
// Or more specifically:
// "What happens when an object of the Riya class is created?"
// The answer, of course, is that the message "I am a student" is printed to the console.
#include<iostream>
using namespace std;
class riya{
int y;
public: riya(){
    cout<<"I am a student";
}
};
int main()
{
riya o;

}