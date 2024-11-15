#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    int num1,num2,num,i,r,sum,count;

    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"Enter num2"<<endl;
    cin>>num2;

    if(num1>num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    

    for(i=num1;i<=num2;i++)
    {
        count =0;
        num=i;
        while(num>0)
        {
            ++count;
            num/=10;
        }
        
        sum =0;
        num = i;
        while(num>0)
        {
            r = num%10;
            sum = sum + pow(r,count);
            num/=10;
        }
        
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }


    return 0;
}





// #include<iostream>
// using namespace std;

// int Arm(int);

// int main()
// {
//     int x,n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     for(int i=1000;i<=n;i++)
//     {
//         x = Arm(i);
//         if(x==1)
//         {
//             cout<<i<<" ";
//         }
        
    
//     }

    


//     return 0;
// }

// int Arm(int a)
// {
//     int b,str;
//     str =a;
//     int sum = 0;

//     while(a!=0)
//     {
//         b = a%10;
//         a = a/10;
//         sum = sum + b*b*b;
//     }
//     if(sum==str)
//     {
        
//         return 1;
//     }


// }
