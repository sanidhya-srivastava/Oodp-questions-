#include<iostream>

using namespace std;
class bank
{
    private:
    double amt=0;
    int n;
    public:
    void deposit(double m)
    {
        amt=m;
    }
    void withdraw()
    {
        cout << "enter amount to be withdrawn: ";
        cin >> n;
        if(n<amt)
        {
            amt=amt-n;
            cout << "funds withdrawn"<<endl;
        }
        else
         cout << "insufficient funds"<<endl;
    }
    double check_amount()
    {
        cout << "the balance is: "<<amt<<endl;
        return 0.0;
    }
};
int main()
{
    bank ob;
    int ch;
    do
    {
    cout << "menu is: "<<endl;
    cout << "1.deposit"<<endl;
    cout << "2.withdraw"<<endl;
    cout << "3.check amount"<<endl;
    cout << "4.exit"<<endl;
    cout << "enter choice : ";
    cin >> ch;
    switch(ch)
    {
        case 1:
            cout << "enter amount to be deposited: ";
            double m;
            cin >> m;
            ob.deposit(m);
            cout << "amount deposited"<<endl;
            break;
        case 2:
            ob.withdraw();
            break;
        case 3:
            cout << ob.check_amount();
            break;
        case 4:
            cout << "exit";
            break;
        default:
            cout << "invalid choice";
            break;
    }
    } while(ch!=4);
    return 0;

}