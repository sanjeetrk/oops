#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the valur of a and b \n";
    cin>>a>>b;
    int X=a-b;

    try
    {
        if (X!=0){
            cout<<"Result(a\b)= "<<(a/X)<<"\n";

        }
        else{
            throw (X);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught : X = "<<X<<"\n";

    }
    cout<<"END";
    return 0;
}