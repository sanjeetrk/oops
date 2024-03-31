#include<iostream>

using namespace std;

class Item{
    static int count;
    int number;

    public:

    void getdata(int a){
        number=a;
        count ++;
    }

    void getcount(void)
    {
        cout<< "Count: "<<count<<"\n";
    }
};

int Item:: count;

int main()
{
    Item a , b ,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After  reading data" << "\n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}