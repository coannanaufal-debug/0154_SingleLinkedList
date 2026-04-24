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

        Node* newBaru = new Node();
        newBaru->noMhs = nim;
        

        if (START == NULL|| <= Start ->noMhs) {
            if (START != NULL && START->noMhs == nim)
             {
                cout << "\nDuplikasi noMhs tidak diizinkan.\n" << endl;
                delete newBaru; // Menghapus node yang baru dibuat
                return;
            }
          
    }
        Node *previous = Start;
        Node *current = Start;

};