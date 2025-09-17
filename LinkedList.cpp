// Linked List Pop Quiz
// TV 09/17/2025

//
//

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

// Create the struct
    struct node {
        char data;
        node* next;
    };

int main() {

    cout << "\n My Linked List \n";

// Create a string named myStr
    string myStr = "abcDefg";

// Test our struct
// Create a pointer named pHead
    node* pHead = nullptr;

// Create a new node named node
    node* pNew = new node();
    pNew->data = myStr[0];
    pNew->next = nullptr;

// Output what is in our node
    cout << "\n output of data and next:\n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

// Create our Linked List
    pHead = pNew;

// Verify this with output
    cout << "\n output of the node that pHead is pointing to:\n";
    cout << pHead->data << endl;
    cout << pHead->next << endl;

// Add a node to our linked list using our four steps
// Create a new node
    pNew = new node();
    pNew->data = myStr[1];
    pNew->next = nullptr;

// Output our linked list:
    cout << "\n The linked list\n";


    return 0;
}