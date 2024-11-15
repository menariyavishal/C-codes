#include<iostream>
#include<string>

using namespace std;

class A
{
    public:
    void dis()
    {
        cout<<"This is Base classs!!"<<endl;
    }
};

class B: public A
{
    public:
    void print()
    {
        cout<<"This is Derived class!!"<<endl;
    }

};

class C: public A
{   
    public:

};


int main()
{
    C c1;
    c1.dis();


    return 0;

}