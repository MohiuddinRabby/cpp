#include<iostream>
using namespace std;
int main()
{
    /*
    Write a program in C++ to find Size of fundamental data types. Go to the editor
    Sample Output:
    Find Size of fundamental data types :
    ------------------------------------------
    The sizeof(char) is : 1 bytes
    The sizeof(short) is : 2 bytes ......
    */
    cout << "The sizeof(char) is :" << sizeof(char) << " bytes" <<endl;
    cout << "The sizeof(short) is :" << sizeof(short) << " bytes" <<endl;
    cout << "The sizeof(int) is :" << sizeof(int) << " bytes" <<endl;
    cout << "The sizeof(long) is :" << sizeof(long) << " bytes" <<endl;
    cout << "The sizeof(long long) is :" << sizeof(long long) << " bytes" <<endl;
    cout << "The sizeof(float) is :" << sizeof(float) << " bytes" <<endl;
    cout << "The sizeof(double) is :" << sizeof(double) << " bytes" <<endl;
    cout << "The sizeof(bool) is :" << sizeof(bool) << " bytes" <<endl;
    return 0;
}
