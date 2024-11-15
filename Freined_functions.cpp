#include<iostream>

using namespace std;


class A
{
    
        int weight=100,height=55;
        public:
            friend void Fun(A);
            int sample();

};


int A :: sample()
{
    int age=20,money=2000;
    cout<<age<<endl<<money<<endl;
    return 1;
    
    
}

void Fun(A a)
{   cout<<endl;
    cout<<a.weight;
    cout<<a.height;
}


int main()
{
    A s;
    s.sample();
    Fun(s);




    return 0;
}