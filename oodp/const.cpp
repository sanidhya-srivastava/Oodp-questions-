#include<iostream>
using namespace std;
class nam
{
    private:
    string name;
    int age;
    public:
    nam(string n)
    {
        name=n;
        age=0;
    }
    nam(int a)
    {
        name="undefined";
        age=a;
    }
    nam(string n, int a)
    {
        name=n;
        age=a;
    }
    void display()
    {
        cout<<"the name is: "<<name<<endl;
        cout<<"the age is: "<<age<<endl;
    }
};
int main()
{
    nam ob1(14);
    ob1.display();
    nam ob2("raj");
    ob2.display();
    nam ob3("raj",16);
    ob3.display();
    return 0;
}