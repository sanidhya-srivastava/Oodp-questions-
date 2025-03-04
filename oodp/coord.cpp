#include<iostream>
using namespace std;
class coordinate
{
    private:
    int x,y;
    public:
    coordinate()
    {
        cout<<"default constructor"<<endl;
        x=0;
        y=0;
    }
    coordinate(int a, int b)
    {
        cout<<"parameterised constructor"<<endl;
        x=a;
        y=b;
    }
    coordinate(const coordinate &copy)
    {
        cout<<"copy constructor"<<endl;
        x=copy.x;
        y=copy.y;
    }
    void display()
    {
        cout<<"the x coordinate is: "<<x<<endl;
        cout<<"the y coordinate is: "<<y<<endl;
    }
};
int main()
{
    coordinate ob;
    ob.display();
    coordinate ob2(4,6);
    ob2.display();
    coordinate ob3(ob2);
    ob3.display();
    return 0;
}