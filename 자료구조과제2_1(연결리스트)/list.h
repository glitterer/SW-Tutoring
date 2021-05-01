class Node
{
public:
    int data; //Node에 저장될 data
    class Node* next; //다음 Node에 대한 pointer
};

class LinkedList
{
public:
    class Node* head = NULL;  //초기화가 제일 중요... 이것 때문에 계속 문제가 발생했었음
public:
    void Append(int data);
    int Length();
    void Print();
};
