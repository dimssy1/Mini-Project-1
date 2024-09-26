#include <iostream>
using namespace std;
 
struct Mahasiswa
{
    string nama;
    int nim;
    double ipk;
};
 
struct Node
{
    Mahasiswa data;
    Node *next;
};
 
Node *newNode()
{
    Node *nodeBaru = new Node();
    cout << "Masukan nama : ";
    cin >> nodeBaru->data.nama;
    cout << "Masukan nim  : ";
    cin >> nodeBaru->data.nim;
    cout << "Masukan ipk  : ";
    cin >> nodeBaru->data.ipk;
    return nodeBaru;
}
 
void push(Node **top)
{
    Node *nodeBaru = newNode();
    if (*top == NULL)
    {
        *top = nodeBaru;
        return;
    }
    nodeBaru->next = *top;
    *top = nodeBaru;
}
 
void pop(Node **top)
{
    if (*top == NULL)
    {
        cout << "-----------------------------" << endl;
        cout << "Stack underflow" << endl;
        cout << "-----------------------------" << endl;
        return;
    }
    Node *temp = *top;
    *top = (*top)->next;
    delete temp;
}
 
void display(Node *top)
{
    if (top == NULL)
    {
        cout << "-----------------------------" << endl;
        cout << "Stack underflow" << endl;
        cout << "-----------------------------" << endl;
        return;
    }
    while (top != NULL)
    {
        cout << "Nama : " << top->data.nama << endl;
        cout << "NIM  : " << top->data.nim << endl;
        cout << "IPK  : " << top->data.ipk << endl;
        cout << "-----------------------------" << endl;
        top = top->next;
    }
    cout << endl;
}
 
int main()
{
    Node *TOP = NULL;
    int menu;
    while (menu != 4)
    {
        cout << ">> Program stack <<" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukan pilihan : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            push(&TOP);
            break;
        case 2:
            pop(&TOP);
            break;
        case 3:
            display(TOP);
            break;
        case 4:
            continue;
        default:
            cout << "-----------------------------" << endl;
            cout << "Pilihan tidak ada" << endl;
            cout << "-----------------------------" << endl;
        }
    }
    return 0;
}
