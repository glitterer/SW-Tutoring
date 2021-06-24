class Node
{
public:
    int data; //Node�� ����� data
    class Node* next; //���� Node�� ���� pointer
    class Node* prev; // ���� Node�� ���� pointer
};

class LinkedList
{
public:
    class Node* head = NULL; // List�� ���� ù Node�� ����Ű�� pointer
    class Node* tail = NULL; // List�� ���� ������ Node�� ����Ű�� pointer
public:
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
    void PrintReverse();
};