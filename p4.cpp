#include<iostream>
using namespace std;
struct stInfo {
    int age;
    bool driverLicense;
};
stInfo readInfo()
{
    stInfo information ;

    cout << " enter your age : ";
    cin >> information.age;
    cout << " are you have driver license : ";
    cin >> information.driverLicense;

    return information;
}
bool checkInfo(stInfo information)
{
    if( information.age >= 21 && information.driverLicense )
        return true;
    else
        return false;
}
void printResult()
{
    if(checkInfo(readInfo()))
        cout << " Hired";
    else
        cout << " Rejected";
}
int main ()
{
    printResult();
    return 0;

}