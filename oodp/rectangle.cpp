#include<iostream>
using namespace std;
class rectangle
{
    private:
    int len,wid;
    public:
    rectangle(int l, int b)
    {
        cout<<"the memory is allocated"<<endl;
        len=l;
        wid=b;
    }
    int area()
    {
        return len*wid;
    }
    ~rectangle()
    {
        cout<<"the memory is freed"<<endl;
    }
};
int main()
{
    int length, width;
    cout<<"enter length and width: ";
    cin>>length>>width;
    rectangle ob(length,width);
    cout<<"the area is : "<<ob.area()<<endl;
    return 0;
}