//Name: Varnika Maurya
//PRN:2407123160
//Exp No.: 14
//Program No.: 4
#include <iostream>
#include <string>
using namespace std;
class Jeans{
    public:
    string type[3]={"Bootcut","Wide leg","Skinny"};
    void brand()
    {
        cout<<"H&M - &Denim"<<endl;
    }
};
class Bootcut: public Jeans
{
    public:
    string color="Dark Blue";   
};
class WL: public Jeans
{
    public:
    string color="Black";   
};
class Skinny: public Jeans
{
    public:
    string color="Grey";
};
int main()
{
    Bootcut m;
    cout << endl;
    m.brand();
    cout<<m.type[0]<<":"<<m.color<<endl;
    WL m2;
    cout << endl;
    m2.brand();
    cout<<m2.type[1]<<":"<<m2.color<<endl;
    Skinny m3;
    cout << endl;
    m3.brand();
    cout<<m3.type[2]<<":"<<m3.color<<endl;
}

/*
PS C:\Users\CL302_10\Desktop\C++Codes> g++ p4.cpp -o p4
PS C:\Users\CL302_10\Desktop\C++Codes> ./p4.exe

H&M - &Denim
Bootcut:Dark Blue

H&M - &Denim
Wide leg:Black

H&M - &Denim
Skinny:Grey
  */
