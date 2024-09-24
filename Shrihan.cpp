/*
Name: Akhil Yeduvaka
Date: 9/24/24
Assignment: Operating and Programming a select client's product
Extra: None needed
*/
#include <iostream>
using namespace std;
int main()
{
    string name = " ";
    cout << "Hello there! What is your first name?" << endl;
    cin >> name;
    if(name.length() >= 5 && name.length() <= 7) //the formatting to find the length of a string is str.length()
    {
        cout << "You have got a pretty long name, but not too long." << endl;
    }
    else if(name.length() < 5 && name.length() >= 3) //the and operator is the same as java
    {
        cout << "Your name is kind of short, but at least I can understand it." << endl;
    }
    else if(name.length() < 3)
    {
        cout << "I'm pretty sure that is not a name." << endl;
    }
    else if(name.length() > 7 && name.length() <= 10) //the comaprison operators are also the same as java
    {
        cout << "Wow! That is a really long name!" << endl;
    }
    else
    {
        cout << "How long is your name!? I can't even read it!" << endl;
    }
}
