/*
 * A simple program to introduce a Linked List
 * with 3 nodes.
*/

#include <bits/stdc++.h> 
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

// This function prints contents of LinkedList 
// starting from given node
void printList(Node* n)
{
    while( n != NULL ){

        cout << "Data";
        cout << n->data << " ";

        cout << "Node";
        cout << n->next << " ";

        n = n->next;
    }
}

int main(){

    // Set All Nodes to NULL initially
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in heap
    head = new Node();
    second = new Node();
    third = new Node();

    /* Three block have been allocated randomly.
     * Pointers head, second and third have been set as pointers
     * RAndom values have been assigned to the blocks
    */

    head->data = 1;     // assign data to head node
    head->next = second;// Link first node with second node

    second->data = 2;   // assign data to second node
    second->next = third;// Link first node with third node

    third->data = 3;    // assign data to third node
    third->next = NULL; // Made pointer NULL to mark end of List


    /*
     * List Traversal for printing data in each node
    */
    printList(head);

    return 0;

}