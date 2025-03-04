#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A's Constructor"<<endl;
		}
		~A()
		{
			cout<<"A's Destructor"<<endl;
		}
};
class B : A
{
	public:
		B()
		{
			cout<<"B's Constructor"<<endl;
		}
		~B()
		{
			cout<<"B's Destructor"<<endl;
		}
};
class C : B
{
	public:
		C()
		{
			cout<<"C's Constructor"<<endl;
		}
		~C()
		{
			cout<<"C's Destructor"<<endl;
		}
};
int main()
{
	C c;
	return 0;
}