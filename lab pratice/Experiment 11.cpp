#include<iostream>
using namespace std;
class Animal 
{
	public:
		virtual void sound()
		{
			cout << "This is generic animal sound.\n";
		}
};

class Dog : public Animal {
	public:
		void sound () override 
		{
			cout << "The dog says: Woof Woof!\n";
			
		}
};

class Cat : public Animal 
{
public:
void sound() override
{
	cout << "The cat says: Meow Meow!\n";
	}	
};

int main()
{
	Animal * animalPtr;
	Dog dog;
	Cat cat;
	animalPtr = &dog;
	animalPtr->sound();
	animalPtr = &cat;
	animalPtr->sound();
	return 0; 
}
