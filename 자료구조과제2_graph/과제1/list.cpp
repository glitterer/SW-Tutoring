#include <iostream>
#include "list.h"
using namespace std;
void LinkedList::Append(int data) // List�� �������� ���ο� data�� ���� Node �߰�
{
	//������
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	//��� �߰�
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

int LinkedList::Length() // List�� �ִ� Node�� ���� return
{
	int i = 0;
	cout << endl;
	while (head != NULL) {
		i++;
		
		head = head->next;
	}
	return i;
}

void LinkedList::Print() // List�� �ִ� ��� Node�� head���� ������� ��µǾ�� ��
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " "; 
		temp = temp->next;
	}
}

