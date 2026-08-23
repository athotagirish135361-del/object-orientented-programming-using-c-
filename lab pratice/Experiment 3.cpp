#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;

float areaCircle(float radius)
{
	return PI *radius *radius;
}

float areaTriangle(float base,float height)
{
	return 0.5 *base * height;
}

float areaRectangle(float length,float width)
{
	return length * width;
	}
	
	int main(){
		float radius, base, height, length,width;

cout<<"Enter the radius of the circle: ";
cin>>radius;
cout<<"The area of the circle is: " << areaCircle(radius) << endl;
		
cout<<"Enter the base and height of the Triangle: ";
cin>>base>>height;
cout<<"The area of the Triangle is: " << areaTriangle(base, height) << endl;
		
cout<<"Enter the length and width of the Rectangle: ";
cin>>length>>width;
cout<<"The area of the Rectangle is: " << areaRectangle(length, width) << endl;
		
		return 0;
	}

