#include <iostream>
using namespace std;
class Base {
private:
    int privateVar = 10;
protected:
    int protectedVar = 20; 
public:
    int publicVar = 30; 
    int getPrivateVar() 
	{ 
        return privateVar;
    }
};
class Derived : public Base {
public:
    void display() {
        // cout << "Private Variable: " << privateVar << endl; 
        cout << "Private Variable: " << getPrivateVar() << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};
int main() {
    Derived obj;
    obj.display();
    // cout << obj.privateVar; 
    // cout << obj.protectedVar; 
    cout << "Public Variable from main: " << obj.publicVar << endl;
    return 0;
}


/*
Private Member (privateVar):
Cannot be accessed directly in the derived class.
Access is only possible via a public getter function.

Protected Member (protectedVar):
Accessible in the derived class.
Cannot be accessed directly in main().

Public Member (publicVar):
Accessible in the derived class and main().
*/
