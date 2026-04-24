#include <iostream>
using namespace std;

class Node {
public:
    int noMhs;
    Node* next;

}

class linkedList {
    Node *START;
}

public:
    linkedList() {
        START = NULL;
    }

    void addNode() {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node* nodeBaru = new Node();
        nodeBaru->noMhs = nim;
        

        if (START == NULL|| nim <= START ->noMhs) {
            if (START != NULL && START->noMhs == nim)
             {
                cout << "\nDuplikasi noMhs tidak diizinkan.\n" << endl;
                delete nodeBaru; // Menghapus node yang baru dibuat
                return;
            }
          
    }
        Node *previous = START;
        Node *current = START;

        while ((current != NULL) && (current->noMhs < nim ))
         { 
            if (nim == current->noMhs) {
                cout << "\nDuplikasi noMhs tidak diizinkan.\n" << endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        nodeBaru->next = current;
        previous->next = nodeBaru;
    };
    bool listEmpty()
    {
        return START == NULL;
    }
    bool search(int nim, Node** previous, Node** current) {
        *previous = START;
        *current = START;

        while (*current != NULL && (*current)->noMhs < nim) {
            *previous = *current;
            *current = (*current)->next;
        }

        return (*current != NULL && (*current)->noMhs == nim);
    }
    bool delNode(int nim) {
        Node* previous, *current;
        if (!search(nim, &previous, &current)) {
            return false;

        if (current == START) 
            START = START->next;
        else 
            previous->next = current->next;
        


    }