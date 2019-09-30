#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

int main() {
	// Write your main here
	int num;
	bool check = true;

	doublyLinkedList<int> myList; //Create first list.

	cout << "Enter a list of integers ending with -999: " << endl;

	while (check) //Loop inputs to create list. -999 denotes end of list.
	{
		cin >> num;
		cin.clear();
		cout << endl;

		if (num != -999)
		{
			myList.insert(num);
		}
		else
		{
			check = false;
		}
	}

	cout << "List in ascending order: ";
	myList.print();
	cout << endl;

	cout << "List in descending order: ";
	myList.reversePrint();
	cout << endl;

	cout << "Enter item to be deleted: ";
	cin >> num;
	cout << endl;

	myList.deleteNode(num); //delete number entered from list

	cout << "List after deleting " << num << ": ";
	myList.print();
	cout << endl;

	cout << "Enter a number to search for: ";
	cin >> num;
	cout << endl;

	if (myList.search(num)) //search list for number entered by user.
		cout << num << " found in the list.";
	else
		cout << num << " is not in the list.";
	cout << endl;

	doublyLinkedList<int> myListCopy(myList); //Create second list using copy constructor.

	cout << "*****Testing copy constructor*****";
	cout << endl;
	myListCopy.print();
	cout << endl;

	doublyLinkedList<int> thirdList = myList; //Create third list using assignment operator.

	cout << "*****Testing assignment operator*****";
	cout << endl;
	thirdList.print();

	return 0;
}
