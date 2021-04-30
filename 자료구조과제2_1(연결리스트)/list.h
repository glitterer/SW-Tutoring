class Node
{
public:
    int data; //Node에 저장될 data
    class Node* next; //다음 Node에 대한 pointer
};

class LinkedList
{
private:
    Node* head;
public:
    void Append(int data);
    int Length();
    void Print();
};
