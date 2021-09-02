#include<iostream>
using namespace std;
int main()
{
    int num;
    if(cin >> num)
    {
        string result = num > 10 ? "More than 10" : "Less than 10";
        cout << result;
    }
    else
    {
        cout << "Bad input";
    }


    return 0;
}
