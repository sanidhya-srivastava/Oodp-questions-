#include<iostream>
using namespace std;
class car
{
    private:
    string model;
    protected:
    int reg_no;
    void reg_input()
    {
        cout<<"enter registeration number :";
        cin>>reg_no;
    }
    public:
    string colour;
    void display(string m)
    {
        model=m; // working of private acess specifier
        cout<<"the model is: "<<model<<endl; 
    }
};
class reg : public car
{
    public:
    void ent_reg_no() // working of protected acess specifier 
    {
        reg_input();
        cout<<"register no is: "<<reg_no<<endl;
    }
};
int main()
{
    car ob;
    reg ob2;
    string model_no;
    ob2.ent_reg_no();
    ob.colour="black"; // working of a public acess specifier
    cout<<"enter model no: ";
    cin>>model_no;
    cout<<"the colour of car is: "<<ob.colour<<endl;
    ob.display(model_no);
    return 0;
}
