#include <iostream>
using namespace std;

class Node {
        public:
        string data;
        Node* next;
        Node(string val) {
                data = val;
                next = NULL;
        }
};
class Stack {
        public:
        Node* top;

        Stack() {
                top = NULL;
        }
        bool isEmpty() {
                return top == NULL;
        }
        void push(string url) {
                Node* newNode = new Node(url);
                newNode->next = top;
                top = newNode;
                cout << "URL Added: " << url << endl;
        }
        void pop() {
                if (isEmpty()) {
                        cout << "Stack Empty." << endl;
                        return;
                }
                cout << "Navigated Back from: " << top->data << endl;
                Node* temp = top;
                top = top->next;
                delete temp;
        }
        void current() {
                if (isEmpty()) {
                cout << "Stack Empty." << endl;
                return;
                }
                cout << "Current URL is: " << top->data << endl;
        }
};
int main() {
        Stack s;
        int ch;
        char con = 'y';
        while (con == 'y' || con == 'Y') {
        cout << "Enter Choice:" << endl
        << "1. Add Visited Page." << endl
        << "2. Navigate Back." << endl
        << "3. Current Page." << endl
        << "4. Check History (Empty or not)." << endl;
        cin >> ch;

        switch (ch) {
        case 1: {
                string url;
                cout << "Enter URL: ";
                cin >> url;
                s.push(url);
                break;
        }
        case 2:
                s.pop();
                break;
        case 3:
                s.current();
                break;
        case 4:
                if (s.isEmpty())
                cout << "Browser History Empty." << endl;
                else
                cout << "Browser History Not Empty." << endl;
                break;
        default:
                cout << "Enter valid Option." << endl;
                break;
        }
        cout << "Do You Want To Continue? (Y/N): ";
        cin >> con;
        cout << endl;
        }
        return 0;
}