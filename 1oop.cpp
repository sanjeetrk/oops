#include<iostream>

using namespace std;

class Item
{
    int number; // private by default
    float cost;   // private by default

    public:
    void getdata(int a , float b);  // prototype declaration,to be defined
                                     

    // function defined inside class
    void putdata(void)
    {
        cout<<"Number: "<< number<<"\n";
        cout<<"cost: "<<cost<<"\n";
    }
};

// ........Member function definition........

void Item:: getdata(int a , float b)     // use membership label
{
    number=a;   //  private variable directly used
    cost=b;

}

//........Main program..........

int main()
{
    Item x;  // create object x
    cout<<"\nObject x "<< "\n";

    x.getdata(100, 299.95);  // call member function
    x.putdata();             // call member function

    Item y;                  // create another object

    cout<<"\nObject y "<<"\n";

    y.getdata(200, 175.50);
    y.putdata();

    return 0;
}