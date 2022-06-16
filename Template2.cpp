//@mokhc
// Template2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// program demonstrates the use of template to create a class
// with generic type
#include <iostream>
#include <valarray>

using namespace std;

//template declaration
template <class onevar>
//class
class Input {
public:
	//declaring the valarray with generic type and initalization
	valarray<onevar> getinput = {0};

	//constructor
	//template declaration
	template <class onevar>
	Input() {
	}

	//constructor
	//template declaration
	template <class onevar>
	Input(onevar one) {
		getinput = one;
	}

	//function with no return value
	void replyonly() {
		for (int a = 0; a < getinput.size(); a++) {
			cout << getinput[a] << endl;
		}
	}

	//function with return value
	valarray<onevar> reply() {
		return getinput;
	}

};

int main()
{
	//execution
	//declaration and assignment of valarray arrayone
	valarray<int> arrayone = { 1,2,3,4,5 };
	//delcaration and assignment using constructor
	Input<int> one1{arrayone};
	//call the function with no return value
	one1.replyonly();
	//declare and initialize the valarray
	valarray<int> getreturn = {0};
	//get the return value by calling the function with return value
	getreturn = one1.reply();
	//get the length of the valarray
	int len = getreturn.size();
	cout << "The length of the array is :" << len << endl;
	for (int a = 0; a < len; a++) {
		cout << getreturn[a] << endl;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
