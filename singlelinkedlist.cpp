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
        

        if (START == NULL|| nim <= Start ->noMhs) {
            if (START != NULL && START->noMhs == nim)
             {
                cout << "\nDuplikasi noMhs tidak diizinkan.\n" << endl;
                delete nodeBaru; // Menghapus node yang baru dibuat
                return;
            }
          
    }
        Node *previous = Start;
        Node *current = Start;

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