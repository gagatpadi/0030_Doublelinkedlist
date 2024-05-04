#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

Node* START = NULL;

void addNode()
{
	Node *newNode = new Node(); 
	cout << "\nEnter ther roll number of the student: ";
	cin >> newNode->noMhs;

}
