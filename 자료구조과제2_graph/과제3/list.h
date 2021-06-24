class Node
{
public:
    int data; //Node에 저장될 data
    class Node* next; //다음 Node에 대한 pointer
    class Node* prev; // 이전 Node에 대한 pointer
};

class LinkedList
{
public:
    class Node* head = NULL; // List의 가장 첫 Node를 가리키는 pointer
    class Node* tail = NULL; // List의 가장 마지막 Node를 가리키는 pointer
public:
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
    void PrintReverse();
};