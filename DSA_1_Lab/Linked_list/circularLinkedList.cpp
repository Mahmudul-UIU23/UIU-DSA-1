#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


Node* head = nullptr;


void insertFront(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
    } else {
        newNode->next = head->next;
        head->next = newNode;
        int temp = head->data;
        head->data = newNode->data;
        newNode->data = temp;
    }
}



void insertEnd(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}



void deleteFront() {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    Node* temp = head->next;
    if (temp == head) {
        delete head;
        head = nullptr;
    } else {
        head->data = temp->data;
        head->next = temp->next;
        delete temp;
    }
}



void deleteEnd() {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    Node* current = head;
    while (current->next != head) {
        current = current->next;
    }
    Node* temp = head;
    if (current == head) {
        delete head;
        head = nullptr;
    } else {
        current->next = head->next;
        delete temp;
        head = current;
    }
}


void printList() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "head" << endl;
}



int main() {
    int option, data;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert Front\n";
        cout << "2. Insert End\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete End\n";
        cout << "5. Print List\n";
        cout << "6. Quit\n";
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter data to insert at the front: ";
                cin >> data;
                insertFront(data);
                break;
            case 2:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                insertEnd(data);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteEnd();
                break;
            case 5:
                printList();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid option. Please select a valid option." << endl;
        }
    }

    return 0;
}

