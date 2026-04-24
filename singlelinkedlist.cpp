#include <iostream>
using namespace std;

class Node 
{
public:
    int noMhs;
    Node* next;

};

class linkedList
{
    Node *START;


public:
    linkedList() 
    {
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
        if (!search(nim, &previous, &current)) 
            return false;

        if (current == START) 
            START = START->next;
        else 
            previous->next = current->next;

            delete current;
            return true;
        


    }
    void traverse()
    {
        if (listEmpty())
        {
            cout << "\nList Kosong\n" << endl;
        }
        else 
        {
            cout << "\nData didalam list adalah: \n" << endl;
            Node* currentNode = START;
            while (currentNode != NULL) {
                cout << currentNode->noMhs << endl;
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }
};

int main() {
    linkedList mhs;
    int nim;
    char ch;
    do
    {
        cout << "Menu: " << endl;
        cout << "1. menambahkan data kedalam list" << endl;
        cout << "2. menghapus data dari dalam list" << endl;
        cout << "3. menampilkan semua data dari dalam list" << endl;
        cout << "4. menampilkan semua data dari dalam list secara terbalik" << endl;
        cout << "5. mencari data dalam list" << endl;
        cout << "6. keluar" << endl;
        cout << "Masukkan pilihan (1-6): ";
        cin >> ch;

        
}