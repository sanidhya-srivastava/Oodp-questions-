#include<iostream>
using namespace std;
class vehicle
{
    protected:
    double speed;
    string colour;
    void ent_detail()
    {
        cout<<"enter speed of vehicle: ";
        cin>>speed;
        cout<<"enter colour of vehicle: ";
        cin>>colour;
    }
    void display()
    {
        cout<<"the speed of vehicle is: "<<speed<<endl;
        cout<<"the colour of vehicle is: "<<colour<<endl;
    }
};
class car : private vehicle
{
    private:
    string type,company;
    int no_seater;
    public:
    void enter_detail_c()
    {
        ent_detail();
        cout<<"enter type of car: ";
        cin>>type;  
        cout<<"enter company of car: ";
        cin>>company;
        cout<<"enter no of seats in car: ";
        cin>>no_seater;
    }
    void disp_detail_c()
    {
        display();
        cout<<"the type of car is: "<<type<<endl;
        cout<<"the company of car is: "<<colour<<endl;
        cout<<"the car is "<<no_seater<<" seater"<<endl;
    }
};
class bike : private vehicle
{
    private:
    int cc,milage;
    public:
    void enter_detail_b()
    {
        ent_detail();
        cout<<"enter cc of bike: ";
        cin>>cc;
        cout<<"enter milage of bike: ";
        cin>>milage;
    }
    void disp_detail_b()
    {
        display();
        cout<<"the cc of bile is: "<<cc<<endl;
        cout<<"the milage of bike is: "<<milage<<endl;
    }
};
int main()
{
    car cr;
    bike bi;
    cr.enter_detail_c();
    cr.disp_detail_c();
    bi.enter_detail_b();
    bi.disp_detail_b();
    return 0;
}