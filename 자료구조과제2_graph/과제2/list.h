class Node
{
public:
    int data; //Node�� ����� data
    class Node* next; //���� Node�� ���� pointer
};

class LinkedList
{
public:
    class Node* head = NULL;
public:
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
};