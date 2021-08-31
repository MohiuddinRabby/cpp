#include<iostream>
#include<string>
using namespace std;
int main()

{
    //concat
    string firstName = "MR.",lastName = "X";
    cout << firstName + " "+ lastName+"\n";
    //concat with append func
    string fullName = firstName.append(lastName);
    cout << fullName;
    //string length
    string txt = "The name of the country is Bangladesh";
    cout << "\nThe length of the text : "<<txt.length();
    cout << "\nThe size of the text : "<<txt.size();
    cout << "\n";
    //input strings
    string countryNameAndCapital;
    /*
    only takes first part before space of the string
    cin >> countryNameAndCapital;
    */
    //takes a full string
    getline(cin,countryNameAndCapital);
    cout << countryNameAndCapital;
    return 0;
}
