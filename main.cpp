#include <iostream>
#include <vector>
using namespace std;

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

//Circle, Rectangle, Triangle�� �ϳ��� �迭�� ��������? 

int main()
{

	vector<FShape*> Shapes;

	Shapes.push_back(new FTriangle());
	Shapes.push_back(new FRectangle());
	Shapes.push_back(new FCircle());
	
	for (int i = 0; i < Shapes.size(); i++)
	{
		Shapes[i]->Draw();
	}
	for (int i = 0; i < Shapes.size(); i++)
	{
		delete Shapes[i];
	}
	return 0;
}