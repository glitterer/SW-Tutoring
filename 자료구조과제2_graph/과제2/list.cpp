#include <iostream>
#include "list.h"
using namespace std;
void LinkedList::Append(int data) // List의 마지막에 새로운 data에 대한 Node 추가
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void LinkedList::Prepend(int data) // List의 처음에 새로운 data에 대한 Node 추가
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
}

int LinkedList::Length() // List에 있는 Node의 수를 return
{
	int i = 0;
	cout << endl;
	while (head != NULL) {
		i++;

		head = head->next;
	}
	return i;
}

void LinkedList::Print() // List에 있는 모든 Node를 head부터 순서대로 출력되어야 함
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " "; 
		temp = temp->next;
	}
}

