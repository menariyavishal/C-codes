#include<iostream>
using namespace std;

int main()
{
    int otpay,em=1,hour;

    while(em++<=10)
    {
        cout<<"Enter the hour you worked :"<<endl;
        cin>>hour;
        if(hour>=40){
            otpay = (hour - 40)*120;
            
        }
        else
        {
            otpay =0;
        }

        cout<<otpay<<endl;
    }

    return 0;
}