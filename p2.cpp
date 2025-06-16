#include<iostream>
#include<string>
using namespace std;

string readName()
{
    string name;
    cout << " enter your name : ";
    getline(cin,name);
    return name;
}
void printName(string name)
{
    cout << " my name is : " << name;
}
int main ()
{
    printName(readName());
    return 0;
}