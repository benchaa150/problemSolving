#include<iostream>
using namespace std;
void readmarkbers(int &mark1, int &mark2, int &mark3)
{
    cout << " enter mark 1 : ";
    cin >> mark1;

    cout << " enter mark 2 : ";
    cin >> mark2;

    cout << " enter mark 3 : ";
    cin >> mark3;
}
int calcSum(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}
float calcAverage(int mark1, int mark2, int mark3)
{
    return (float) calcSum(mark1,mark2,mark3) / 3;
}
void printResult(float average)
{
    cout << "the average of 3 marks : "<< average;
}
int main ()

{
    int mark1, mark2, mark3;

    readmarkbers(mark1,mark2,mark3);
    printResult(calcAverage(mark1,mark2,mark3));

    return 0;
}