#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth,peri,area;
    public:
    void calculate(int l, int b)
    {
        length=l;
        breadth=b;
        peri=2*(l+b);
        area=l*b;
    }
    void display()
    {
        cout<<"the perimeter of rectangle is: "<<peri<<endl;
        cout<<"the area of rectangle is: "<<area<<endl;
    }
};
int main()
{
    int len,brid;
    cout<<"enter length: ";
    cin>>len;
    cout<<"enter bridth: ";
    cin>>brid;
    rectangle ob;
    ob.calculate(len,brid);
    ob.display();
    return 0;
}