#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter value::";
    cin>>n;
    if(n<1)
    {
        cout<<"Invalid number!!";
        
    }
   
    else
    {
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum = sum+ arr[i];
        }

    cout<<"Sum = "<<sum<<endl;
    int avg = sum/n;
    cout<<"average is ::"<<avg<<endl;
}



    return 0;
    }

    