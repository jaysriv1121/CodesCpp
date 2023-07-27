
class Node
{
    public:
    #define NULL 0
    int data;
    Node*next;

    Node(int data)
    {
        this -> data = data;
        next =  NULL;
    }
};
