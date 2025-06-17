#include<iostream>
using namespace std;
struct stFullName {
    string firstName;
    string lastName;
};
stFullName readFullName()
{
    stFullName fullName;

    cout << " enter your first name : ";
    cin >> fullName.firstName;

    cout << " enter your last name : ";
    cin >> fullName.lastName;

    return fullName;
}
void printFullName (stFullName fullName)
{
    cout << " your full name is : " << fullName.firstName << " " << fullName.lastName;
}
int main ()
{
    printFullName(readFullName());
    return 0;
}