/* Class Activity Pointers in C++ */

//My first pointer


#include <iostream>
using namespace std;


int main ()
{
	int firstvalue, secondvalue;
	int * mypointer;
	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;
	return 0;
};

/**********
OUTPUT:

firstvalue is 10
secondvalue is 20

/***********