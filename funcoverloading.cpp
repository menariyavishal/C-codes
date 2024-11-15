#include<iostream>
using namespace std;


void A()
{
    cout<<"Jaswant pyara hai!!"<<endl;

}
void A(int a)
{
    cout<<"Jaswant pyara hai!!"<<endl;
    cout<<a;

}
void A(int a,int b)
{
    cout<<"Jaswant pyara hai!!"<<endl;
    cout<<a<<" "<<b;

}
void A(double a,double b)
{
    cout<<"Jaswant pyara hai!!"<<endl;
    cout<<a<<" "<<b;

}




int main()
{
   A(5.8,4.6); 
   A(); 
   A(1,2); 
   A(8); 

    return 0;
}