#include<iostream>
using namespace std;
class payroll
{
    private:
    int hrs;
    double wage;
    public:
    void enter_detail()
    {

    }
    void detail(string emp_name, int id_no, double hourly_wage, int hrs_worked)
    {
        cout<<"employee details are"<< endl;
        cout<<"the name of employee is: "<<emp_name<<endl;
        cout<<"the id no. of employee is: "<<id_no<<endl;
        cout<<"the hourly wage of employee is: "<<hourly_wage<<endl;
        cout<<"the hours worked by employee is: "<<hrs_worked<<endl;
    }
    double weekly(double hourly_wage, int hrs_worked)
    {
        wage=hourly_wage;
        hrs=hrs_worked;
        double weekly_pay= (wage*hrs)*5;
        return weekly_pay;
    }
};
int main()
{
    payroll ob;
    string ename;
    int idno,hours;
    double hr_w,weekly_wage;
    cout<<"enter name : ";
    cin>>ename;
    cout<<"enter id no. : ";
    cin>>idno;
    cout<<"enter hourly wage : ";
    cin>>hr_w;
    cout<<"enter hours worked : ";
    cin>>hours;
    ob.detail(ename,idno,hr_w,hours);
    weekly_wage=ob.weekly(hr_w,hours);
    cout<<"weekly pay of employee is: "<<weekly_wage<<endl;
    return 0;
}