#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b \n";
    cin>>a>>b;
    int X=a-b;

    try
    {
        if (X!=0){
            cout<<"Result(a/X)= "<<(a/X)<<"\n";

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