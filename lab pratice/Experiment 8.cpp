//Write a C++ Program to demonstrate the Concept of Destructor.
#include<iostream>
using namespace std;

class Demo
{
	public:
		Demo()
		{
			cout << "Constructor is called: Object Created!" << endl;
		}
		~Demo()
		{
			cout << "Destructor is called: Object Destroyed!" << endl;
		}
};
int main()
{
	cout << "Creating Object.....\n";
	Demo obj;
	cout << "Exiting Program........\n";
	return 0;
}
