#include <iostream>
using namespace std;

// Node structure
class Node {

public:
    int data;
    Node* next;
};
// Queue class1

class Queue
{
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue
    Queue()
    {
        front = NULL;
        rear = NULL;

    }

    // 1. Allocate memory for the new node.
    // 2. Assign value to the data field of the new node.
    // 3. Make the next field of the new node point to NULL.
    // 4. If the queue is empty, execute the following steps:
    // a. Make FRONT point to the new node
    // b. Make REAR  point to the new node
    // d. Exit
    // 5. Make the next field of REAR point to the new node.
    // 6. Make REAR point to the new node.

    // LENGKAPI FUNGSI INI SESUAI ALOGORITMA DIATAS
    void insert() {
        Node* newNode = new Node();
        cout << "Enter data to insert: ";
        cin >> newNode->data;


        newNode->next = NULL;

        // Jika antrian kosong
        if (rear == NULL) {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;

        rear = newNode;

    }

    //1. If the queue is empty: // FRONT = NULL
        // a. Display “Queue empty”
        // b. Exit
    //2. Mark the node marked FRONT as current
    //3. Make FRONT point to the next node in its sequence
    //4. Release the memory for the node marked as current

    // LENGKAPI FUNGSI INI SESUAI ALOGORITMA DIATAS
    void deleteQueue()
    {
        if (front == NULL) {
            cout << "Queue empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;

        // If the queue becomes empty after dequeue
        if (front == NULL) {
            rear = NULL;
        }
    }



    // Function to display all elements of the queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;

    };

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue q;
    int choice;

    do
    {
        cout << "\nQueue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.insert();
            break;
        case 2:
            q.deleteQueue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice, please try again\n";
        }
    } while (choice != 4);

    return 0;
}
