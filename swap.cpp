#include<iostream>
#include<utility>
using namespace std;
// void my_swap(int *a,int *b)
// {
//     int tamp =*a;
//     *a=*b;
//     *b=tamp;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    // my_swap(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}