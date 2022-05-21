#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	// 1
	// int minX;
	// int maxX;
	// int minY;
	// int maxY;

	// int xPoint;
	// int yPoint;

	// std::cout << "Enter min X of rectangle: ";
	// std::cin >> minX;

	// std::cout << "Enter max X of rectangle: ";
	// std::cin >> maxX;

	// std::cout << "Enter min Y of rectangle: ";
	// std::cin >> minY;

	// std::cout << "Enter max Y of rectangle: ";
	// std::cin >> maxY;

	// std::cout << "Enter x of point: ";
	// std::cin >> xPoint;

	// std::cout << "Enter y of point: ";
	// std::cin >> yPoint;

	// std::cout << boolalpha << "Point in rectangle: " << (xPoint > minX && xPoint < maxX && yPoint > minY && yPoint < maxY); // AABB 

	// 2
	// int xStart;
	// int xEnd;
	// int yStart;
	// int yEnd;

	// std::cout << "Enter start: ";
	// std::cin >> xStart >> yStart;

	// std::cout << "Enter end: ";
	// std::cin >> xEnd >> yEnd;

	// std::cout << "Line || " << ((xStart == xEnd) ? "x" : (yStart == yEnd) ? "y" : "none");

	// 3
	// float num;

	// std::cout << "Enter num: ";
	// std::cin >> num;

	// std::cout << boolalpha << "Is there float part? answer: " << (num - (int)num == 0);

	// 4

	int num;

	std::cout << "Enter number: ";
	std::cin >> num;
	
	int sum1 = num % 10 + num / 10 % 10 + num / 100 % 10;
	int sum2 = num / 1000 % 10 + num / 10000 % 10 + num / 100000 % 10;

    std::cout << boolalpha << "Happy: " << (sum1 == sum2);
}	