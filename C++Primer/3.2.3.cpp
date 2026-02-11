#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string str("hello world");
    
    for(auto c :str)
    {
        cout<<c;
    }
}