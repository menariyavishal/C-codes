#include<iostream>

using namespace std;

int main()
{
    float a,power;
    int b,i;

    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;

    power = i =1;

    while(i<=b)
    {
        power *=a;
        i++;
    }
    cout<<power;

    return 0;
}