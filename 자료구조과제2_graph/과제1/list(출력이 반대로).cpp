#include <iostream>
#include "list.h"
using namespace std;

void LinkedList::Append(int data) // List의 마지막에 새로운 data에 대한 Node 추가
{
	//노드생성
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;

	Node* cur = head;

	//노드 추가
	if (head == NULL) { //노드가 하나 존재할 경우,
		head = newNode; //첫 번째 노드를 가리킨다.
		cur = newNode;
	}
	else { //리스트가 비어있지 않을 경우,
		newNode->next = head; //head의 다음 가리키는 곳이 newNode가 된다.
		head = newNode;
	}
}

//int LinkedList::Length() // List에 있는 Node의 수를 return
//{
//
//}

void LinkedList::Print() // List에 있는 모든 Node를 head부터 순서대로 출력
{
	Node* node = head;
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << "NULL" << endl;
}
