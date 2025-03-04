#include<iostream>
using namespace std;
class employee
{
    private:
    string name;
    int emp_id,basic_sal,bonus,total_sal;
    public:
    employee(string n,int id, int b_pay,int bon)
    {
        name=n;
        emp_id=id;
        basic_sal=b_pay;
        bonus=bon;
        total_sal=basic_sal+bonus;
    }
    void display()
    {
        cout<<"the name of employee is : "<<name<<endl;
        cout<<"the id of employee is : "<<emp_id<<endl;
        cout<<"the basic pay of employee is : "<<basic_sal<<endl;
        cout<<"the bonus of employee is : "<<bonus<<endl;
        cout<<"the total salary of employee is : "<<total_sal<<endl;
    }
};
int main()
{
    string nam;
    int id,basicsal,bon;
    cout<<"enter name ,id ,basic salary ,bonus of the employee ";
    
    employee ob("ss",44,444,4444);
    ob.display();
    return 0;
}