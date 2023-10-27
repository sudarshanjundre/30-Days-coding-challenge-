// Program to swap two numbers without using 3rd variable.
#include<iostream>
using namespace std;
void swap(){
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapped numbers are:\n";
    cout<<a<<"\n"<<b;
    }
    int main()
    {
        swap();
        return 0;
    }
