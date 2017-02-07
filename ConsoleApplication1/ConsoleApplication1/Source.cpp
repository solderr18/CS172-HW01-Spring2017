#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void ex02(); //EX01_01

int main() {
	srand(time(NULL)); //for the random values
	//EX01_01
	cout << "ex02 \n";
	void ex02();
}

void ex02() {
	///a
	bool hasPassedTest = true;
	///b
	int x = rand() % 10 + 1, y = rand() % 10 + 1; //two random integers btwn 1 and 10
	cout << "Let x = " << x << " and y = " << y << ".\n";
	if (x > y)
		cout << "x (" << x << ") is greater than y (" << y << ").\n";
	else if (y > x)
		cout << "y (" << y << ") is greater than x (" << x << ").\n";
	else
		cout << "x (" << x << ") is equal to y (" << y << ").\n\n";
	///c
	int numberOfShares;
	cout << "Number of shares: ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "The number of shares (" << numberOfShares << ") is less than 100.\n\n";
	///d
	int box, book;
	cout << "Box width: ";
	cin >> box;
	cout << "Book width: ";
	cin >> book;
	if (box%book == 0)
		cout << "The box width (" << box << ") is evenly divisible by the book width (" << book << ").\n\n";
	else
		cout << "The box width (" << box << ") is not evenly divisible by the book width (" << book << ").\n\n";
	///e
	double shelfLife, temp;
	cout << "Shelf life of box of chocolate: ";
	cin >> shelfLife;
	cout << "Outside temperature: ";
	cin >> temp;
	if (temp > 90)
		shelfLife -= 4;
	cout << "Shelf life is " << shelfLife << ".\n\n\n";
}