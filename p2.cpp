//Name: Varnika Maurya
//PRN:2407123160
//Exp No.: 14
//Program No.: 2
#include <iostream>
#include <string>
using namespace std;
//Parent class 1
class Vehicle{
    public:
    string brand="Ford";
    void type()
    {
        cout<<"Mustang\n";
    }
};
//Parent class 2
class Specs
{
    public:
    string milage="8 kmpl";
    void color()
    {
        cout<<"Red!\n";
    }    
};
//derived class
class Car: public Vehicle, public Specs
{
    public:
    string seater="4 seater";
};
int main()
{
    Car m;
    m.color();
    cout<<m.brand<<" ";
    m.type();
    cout<<"("<<m.seater<<")"<<endl<<"MILAGE: "<<m.milage<<endl;
}

/*
PS C:\Users\CL302_10\Desktop\C++Codes> g++ p2.cpp -o p2
PS C:\Users\CL302_10\Desktop\C++Codes> ./p2.exe
Red!
Ford Mustang
(4 seater)
MILAGE: 8 kmpl
  */
