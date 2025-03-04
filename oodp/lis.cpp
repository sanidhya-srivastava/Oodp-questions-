#include <iostream>  
#include <exception>  
using namespace std;  
class MyException:public exception
{  
    public:  
       void msg()
        {  
      cout<<"Not eleigible to vote";
        }
};  
int main()  
{
    int age;
    cin >> age;  
    try  
    {

        if (age < 18)  
        {  
            MyException obj;  
            throw obj;  
        }  
        else  
        {  
            cout << "Eligible to vote"<< endl;  
        }  
    }  
    catch(MyException obj)  
    {  //Myexception e;
       obj.msg();  
    }  
} 
