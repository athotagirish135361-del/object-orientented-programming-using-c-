#include<iostream>
using namespace std;

        class calculator
        {
	     private:
		int num1, num2;
		
	     public:
		void input()
		{
			cout << "Enter First Number: ";
			cin >> num1;
			cout << "Enter Second Number: ";
			cin >> num2; 
		}
		
		int add()
		{
			return num1 + num2;
		}
		
		void display()
		{
		cout << "The sum of  " << num1 << " and " << num2 << "is : " << add() << endl;
		}
		};
			
		int main() {
		calculator calc;
		calc.input();
		calc.display();
				
		return 0;
		}
