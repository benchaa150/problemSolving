#include<iostream> 
using namespace std;
enum enOddEven{ odd, even};
int readNumber()
{
    int number;

    cout << " enter number :";
    cin >> number;

    return number;
}
enOddEven checkNumberType(int number)
{
    if(number % 2 == 0)
        return enOddEven::even;
    else
        return enOddEven::odd;
    
}
void printOddOrEven(enOddEven result)
{
    if(result == enOddEven::even)
        cout << " the number is even";
    else
        cout << " the number is odd";
}
int main ()
{
    cout << "\nmy name is benchaa";

    printOddOrEven(checkNumberType(readNumber()));
    return 0;
}