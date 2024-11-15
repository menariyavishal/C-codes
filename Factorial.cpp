#include<iostream>

using namespace std;



//Fibonacci series
int main()
{
    int f;
     cout<<"Enter the value"<<endl;
     cin>>f;
    
    int A=0;
    int B=1;
    cout<<A<<" "<<B<<" ";

    int next;
    for(int i =1;i<=f;i++)
    {
        next = A + B;
        cout<<next<<" "; 
        A= B;
        B = next;

    }
    
    return 0;
}






























// #include<iostream>

// using namespace std;

// //Factorial Through Recursions

// int Fact(int n)
// {
//     if(n<1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*Fact(n-1);
//     }
// }



// int main()
// {
//     int f;
//     cout<<"Enter the value"<<endl;
//     cin>>f;
//     cout<<Fact(f)<<endl;
//     return 0;
// }