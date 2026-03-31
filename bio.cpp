//Local and Global Variables in C++
#include<iostream>
using namespace std;
int x;//Global variable which if can't be assigned any value assign the value automatically as 0
// also the global variables can be accessed anywhere inside the function or even outside the function
int main()
{
    int x=10;// local variable which is defined only inside any function and can't be accessed outside the function and must be assigned any value otherwise it will take any garbage value automatically not 0
    int y=20;
    cout<<x<<endl;
    cout<<y<,endl;
}
