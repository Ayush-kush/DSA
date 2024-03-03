#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool isEmpty(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

// Q1 : Traverse a linked list.

void traverse(Node *head)
{
    if (isEmpty(head))
    {
        cout << "There are no nodes in the list";
    }
    else
    {
        while (head != nullptr)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
}

// Q2. Count the no of nodes.
int countNodes(Node *head)
{
    int count = 0;

    while (head != nullptr)
    {
        head = head->next;
        count++;
    }
    return count;
}

// Q3. Print the last element of node.

int lastNode(Node *head)
{
    if (isEmpty(head))
    {
        cout << "There are no nodes in the list";
    }
    else
    {
        while (head->next != nullptr)
        {
            head = head->next;
        }

        return head->data;
    }
    return -1;
}

// Q4. print the 2nd last node.

int secondLastNode(Node *head)
{
    if (isEmpty(head) || head->next == nullptr)
    {
        cout << "There are no 2nd last node in the list";
    }
    else
    {
        while (head->next->next != nullptr)
        {
            head = head->next;
        }

        return head->data;
    }
    return -1;
}

// Q5. Given a key search in the linked list and return true or false.

bool searchKey(Node *head, int key)
{

    if (isEmpty(head))
    {
        cout << "There are no nodes in the list";
    }
    else
    {
        while (head != nullptr)
        {
            if (head->data == key)
            {
                return true;
            }
            head = head->next;
        }
    }
    return false;
}
// Q6. Print alternate node's elements(i.e. print odd node's elements)

void printAlternateNode(Node *head){
    if (isEmpty(head))
    {
        cout << "There are no nodes in the list";
    }
    else
    {
        int count=1;
        while (head!=nullptr)
        {
            if (count%2!=0)
            {
                cout<<head->data;
            }
                count++;
                head=head->next;
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    Node *head;
    Node *node3;
    Node *node2;
    head = (struct Node *)malloc(sizeof(struct Node));
    node2 = (struct Node *)malloc(sizeof(struct Node));
    node3 = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = nullptr;

    traverse(head);

    cout << countNodes(head) << endl;

    cout << lastNode(head) << endl;

    cout << secondLastNode(head) << endl;

    cout << searchKey(head, 50) << endl;

    printAlternateNode(head);
    return 0;
}