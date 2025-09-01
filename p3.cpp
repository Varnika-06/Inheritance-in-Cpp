//Name: Varnika Maurya
//PRN:2407123160
//Exp No.: 14
//Program No.: 3
#include <iostream>
#include <string>
using namespace std;
class Food{
    public:
    string cuisine="Indian";
    void type()
    {
        cout<<"Asian"<<endl;
    }
};
class Dish: public Food
{
    public:
    string dish="Biryani";   
};
class Res: public Dish
{
    public:
    string name="Spice kitchen";
};
int main()
{
    Res m;
    m.type();
    cout<<m.cuisine<<":"<<m.dish<<endl;
    cout<<"Restaurant: "<<m.name<<endl;
}

/*
PS C:\Users\CL302_10\Desktop\C++Codes> g++ p3.cpp -o p3
PS C:\Users\CL302_10\Desktop\C++Codes> ./p3.exe
Asian
Indian:Biryani
Restaurant: Spice kitchen
*/
