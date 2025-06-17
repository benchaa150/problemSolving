#include<iostream>
using namespace std;
enum enPassOrFail{ pass ,fail};
int readMark()
{
    int mark;

    cout << " enter your mark : ";
    cin >> mark;

    return mark;
}
enPassOrFail checkMark(int mark)
{
    if(mark>= 50)
        return enPassOrFail::pass;
    else
        return enPassOrFail::fail;
}
void printResult(int mark)
{
    if(checkMark(mark) == enPassOrFail::pass)
        cout << " Pass";
    else
        cout << " Fail";
}
int main ()
{
    printResult(readMark());
    return 0;
}