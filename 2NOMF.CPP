#include<iostream>

using namespace std;

class Set
{
    int m,n;

    public:

    void input(void);
    void display(void);
    int  largest(void);
};

int Set:: largest(void)
{
    if (m>=n)
        return (m);

    else
        return (n);
}

void Set:: input(void)
{
    cout<<"Input values of m and n"<<"\n";
    cin>>m >>n;

}

void Set:: display(void)
{
    cout<<"Largest value = "<<largest() <<"\n";   // calling member fuction  
}

int main(){
    Set A;
    A.input();
    A.display();

    return 0;
}