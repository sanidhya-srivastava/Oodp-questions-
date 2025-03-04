#include<iostream>
using namespace std;
class addnum
{
    private:
    int a,b;
    public:
    int adder(int n1,int n2)
    {
        a=n1;
        b=n2;
        return a+b;
    }
};
int main()
{
    addnum ob;
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"the sum is: "<<ob.adder(num1,num2)<<endl;
    return 0;
}