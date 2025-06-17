#include<iostream>
using namespace std;
void readNumbers(int &num1, int &num2, int &num3)
{
    cout << " enter number 1 : ";
    cin >> num1;

    cout << " enter number 2 : ";
    cin >> num2;

    cout << " enter number 3 : ";
    cin >> num3;
}
int calcSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
void printResult(int sum)
{
    cout << "the sum of 3 numbers : "<< sum;
}
int main ()

{
    int num1, num2, num3;

    readNumbers(num1,num2,num3);
    printResult(calcSum(num1,num2,num3));

    return 0;
}