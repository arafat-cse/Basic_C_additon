#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s [100];
    // cin >>s;
    cin.getline(s,100);
    cout<<s;
    cout<<endl;
    cout << strlen(s);
    return 0;
}