/*		SARAH OLDERR
		CS 172 HW01
*/
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void ex01(); 
void ex02(); 
void ex03(); 
void ex04();
int doubleFxn(int number); //ex03
int sumFxn(int number1, int number2); //ex03
void addOne(int &parameter); //ex03
void arrayFxnValues(int bloops[], int arraySize); //ex04
void arrayFxnX(int a[], int arraySize); //ex04

int main() {
	srand(time(NULL)); //for the random values
	cout << "ex01 \n";
	ex01();
	cout << "ex02 \n";
	ex02();
	cout << "ex03 \n";
	ex03();
	cout << "ex04 \n";
	ex04();
}

void ex01() { 
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
	else if (numberOfShares > 100)
		cout << "The number of shares (" << numberOfShares << ") is greater than 100.\n\n";
	else if (numberOfShares == 100)
		cout << "The number of shares (" << numberOfShares << ") is equal to 100.\n\n";
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
		shelfLife -= 4; //does not work with numbers <5
	cout << "Shelf life is " << shelfLife << ".\n\n\n";
}
void ex02() {
	///a
	double height, length, hyp; //user type in height & length, solve for hyp
	cout << "Imagine a right triangle. What is it's height? ";
	cin >> height;
	cout << "What is it's length? ";
	cin >> length;
	cout << "The height and length of your right triangle are " << height << " units and " << length << " units respectively.\n";
	hyp = sqrt(height*height + length*length);
	cout << "The hypotenuse of your right triangle is " << hyp << " units. \n\n";
	///b
	char a;
	//do{ //test
	cout << "yes or no (type y or n)? ";
	cin >> a;
	a = tolower(a);
	if (a == 'y')
		cout << "yes\n\n";
	else if (a == 'n')
		cout << "no\n\n";
	else
		cout << "you chose neither y nor n.\n\n";
	//while ( a!= y || a!= n) //test
	///c
	char t = '\t';
	///d
	string mailingAddress;
	cout << "Mailing address: ";
	cin.ignore();
	getline(cin, mailingAddress);
	cout << "You entered: " << mailingAddress << endl << endl;
	///e
	string empty = "";
	cout << endl;
}
void ex03() { 
	///a
	int num; //Instructions are unclear, but I'm assuming "number" means integer bc of part b
	do {
		cout << "Enter an integer between 1 and 10: ";
		cin >> num;
		if (num < 1)
			cout << "That integer is less than 1.\n";
		else if (num > 10)
			cout << "That integer is greater than 10.\n";
	} while (num < 1 || num > 10);
	///b
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += (i*i*i);
	}
	cout << "Sum of cubes from 1 to " << num << " = " << sum << endl << endl;
	///c
	cout << num << " astericks:\n";
	int b = 0;
	do {
		cout << "*";
		b++;
	} while (b < num);
	cout << endl << endl;
	///d
	cout << "Even numbers between 0 and 40: \n";
	for (int i = 0; i <= 40; i++) {
		if (i % 2 == 0)
			cout << i << " ";
	}
	cout << endl << endl;
	///e
	cout << "Doubling function using " << num << " : \n";
	cout << num; //still using integer from pt a
	int twiceNum = doubleFxn(num);
	cout << " x 2 = " << twiceNum << endl << endl;
	///f
	cout << "Adding function using two random integers: \n";
	int x = rand() % 10 + 1, y = rand() % 10 + 1; //two random integers btwn 1 and 10
	int add = sumFxn(x, y);
	cout << x << " + " << y << " = " << add << endl << endl;
	///part g
	int parameter;
	//parameter = 1; //test
	//cout << "parameter = " << parameter << endl; //test
	addOne(parameter);
	//cout << "parameter + 1 = " << parameter << endl; //test
	cout << endl;
}
void ex04() {
	///part a
	cout << "Entering values into some size 3 array: \n";
	int bloop[3];
	int sum = 0, product = 1; //for part b
	for (int i = 0; i < 3; i++) {
		cout << "Integer " << i + 1 << ": ";
		cin >> bloop[i];
		sum += bloop[i];
		product *= bloop[i];
	}
	///part b
	cout << endl << "the sum of these integers is " << sum << endl;
	cout << "the product of these integers is " << product << endl << endl;
	///part c
	arrayFxnValues(bloop, 3); //3 BC size of array
	cout << endl << endl;
	///part d
	arrayFxnX(bloop, 3); //3 BC size of array
	cout << endl;
}


//EX01_03 part e --- doubling function
int doubleFxn(int number) {
	return (number * 2);
}
//EX01_03 part f --- summation function 
int sumFxn(int number1, int number2) {
	return (number1 + number2);
}
//EX01_03 part g --- pass by ref add one function
void addOne(int &parameter) {
	parameter += 1;
}
//EX01_04 part c --- outputs all values in array
void arrayFxnValues(int bloops[], int arraySize) {
	cout << "All values in your array: ";
	for (int i = 0; i < arraySize; i++) {
		cout << bloops[i] << " ";
	}
}
//EX01_04 part d --- outputs specified value "p"
void arrayFxnX(int a[], int arraySize) {
	int x;
	cout << "Given any x there is an integer p such that p = a[2]*x^2 + a[1]* x + a[0] for your inputed array a. \n";
	cout << "Enter integer value of x: ";
	cin >> x;
	int p;
	p = a[2] * x * x + a[1] * x + a[0];
	cout << "The value of p is " << p << endl;
}