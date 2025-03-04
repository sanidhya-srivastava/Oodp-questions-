#include<iostream>
using namespace std;
class over
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    } 
};
int main()
{
    over ob;
    cout<<"the following demonstrates function overloading"<<endl;
    int ad1=ob.add(44,55);
    double ad2=ob.add(38.96,86.99);
    cout<<"sum using integer func: "<<ad1<<endl;
    cout<<"sum using double func: "<<ad2<<endl;
    return 0;
}
