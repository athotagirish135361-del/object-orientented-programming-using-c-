//Write a C++ Program To calculate Volume of Box using Constructor.
#include<iostream>
using namespace std;

class Box
{
	int length, width, height;
	public:
		Box(int l,int w,int h)
		{
			length = l;
			width=w;
			height =h;
		}
		int volume()
		{
			return length * width * height;
		}
		void display(){
			cout << "Volume of the Box: " << volume() << endl;
		}
};
int main()
{
	int l, w, h;
	cout << "Enter length ,width,and height of the box: ";
    cin >> l >> w >> h;
    Box b(l, w, h);
    b.display();
    return 0;
}
