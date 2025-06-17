#include<iostream>
using namespace std;
float readNumber()
{
    float number;

    cout << " enter a positive number : ";
    cin >> number;

    return number;
}
float calcHalfNumber (float number)
{
    float halfNumber = 0;
    halfNumber = number /2;

    return halfNumber;
}
void printResult( float number)
{
    cout << " the half of " << number << " is : " << calcHalfNumber(number);
}
int main ()
{
    
    printResult(readNumber());
    return 0;
}