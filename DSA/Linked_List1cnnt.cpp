#include<iostream>
using namespace std;
#include "Linked_List1.cpp"

int main()
{
    Node n1(1);
    Node*head = &n1;

    Node n2(2);

    n1.next = &n2;

    cout << head -> data;
}
