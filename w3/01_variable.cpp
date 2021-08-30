#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    string name  = "Y";
    int age = 25;
    float floatNum = 10.50;
    //constant
    const int numTwo = 20;
    /* error
    numTwo = 21;
    */
    cout << numTwo << "\n";
    cout << "My Name is : " << name << "\nAge : " << age;
    return 0;
}
