#include<iostream>
using namespace std;

void change(int data);

int main()
{
    int data = 3;
    cout<<"The value of data is: "<<data<<endl;

    cout<<"After call by value: "<<"\n";

    change(data);
    cout <<"Value of data is: "<<data<<endl;

    return 0;
}

void change ( int data )
{
    data = 5;
}