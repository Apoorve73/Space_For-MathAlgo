/*
 * Program to insert an element in a Linked List 
*/

#include <bits/stdc++.h> 
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ptr, int num){

    // Allocating Node
    Node* node_new = new Node();

    // Push the integer
    node_new->data = num;

    // Make next of this node as head
    node_new->next = (*head_ptr);

    // move the head to point the new node
    (*head_ptr) = node_new;

}

//main code
int main(){

    // define head of first node
    Node* head = NULL;

    /*
     * Creating the Linked List
    */
    // Insert elements to Linked List, each to the front of the list
    push(&head, 10);
    push(&head, 5);
    push(&head, 11);
    push(&head, 15);
    push(&head, 1);

}