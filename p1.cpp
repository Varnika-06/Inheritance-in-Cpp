//Name: Varnika Maurya
//PRN:2407123160
//Exp No.: 14
//Program No.: 1
#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    public:
    string brand="Ford";
    void color()
    {
        cout<<"Red!\n";
    }
};
//derived class
class Car: public Vehicle
{
    public:
    string model="Mustang";
};
int main()
{
    Car m;
    m.color();
    cout<<m.brand+" "+m.model;
}

/*
PS C:\Users\CL302_10\Desktop\C++Codes> g++ exp13.cpp -o exp13  
PS C:\Users\CL302_10\Desktop\C++Codes> ./exp13.exe 
Red!
Ford Mustang
*/
