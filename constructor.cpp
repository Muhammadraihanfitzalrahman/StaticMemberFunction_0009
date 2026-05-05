#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa(); // Constructor
};

// Definisi Constructor
mahasiswa::mahasiswa() {
    cout << "Constructor Terpanggil" << endl;
}

int main() {
    mahasiswa mhs; // Pembuatan Object
    return 0;
}