class Node
{
public:
    int data; //Node에 저장될 data
    class Node* next; //다음 Node에 대한 pointer
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