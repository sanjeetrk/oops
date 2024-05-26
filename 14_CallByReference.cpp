#include<iostream>
using namespace std;

void swap( int * x, int * y)
{
    int swap;
     swap= * x;
     *x = *y;
     *y = swap;
}

int main()
{
    int x = 500; 
    int y = 100;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;

    swap( &x ,&y);

    cout<<"After call by reference: "<<endl;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;



}