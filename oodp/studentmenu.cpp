#include<iostream>
using namespace std;
class num
{
    private:
    int a=0;
    public:
    num(int x)
    {
        cout<<"created"<<endl;
        a=x;
    }
  
    void disp()
    {
        cout<<"num is :"<<a<<endl;
    }
    ~num()
    {
        cout<<"destructed"<<endl;
    }
};
int main()
{
    num x(10),y(455);
    x.disp();
    cout<<";o;o;"<<endl;
    cout<<";o;o;"<<endl;
    cout<<";o;o;"<<endl;
    y.disp();
    return 0;
}