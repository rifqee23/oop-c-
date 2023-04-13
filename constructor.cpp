#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos
{
public:
    string dataString;
    int dataInteger;
};

// class dengan constructor
class Mahasiswa
{
public:
    string nama;
    string NPM;
    string jurusan;
    double IPK;
    // Mahasiswa()
    // {
    //     cout << "ini adalah contructor"
    //          << "\n";
    // }

    // constructor dengan parameter
    Mahasiswa(string inputNama, string inputNPM, string inputjurusan, double inputIPK)
    {
        Mahasiswa::nama = inputNama; // ini namespace
        Mahasiswa::NPM = inputNPM;
        Mahasiswa::jurusan = inputjurusan;
        Mahasiswa::IPK = inputIPK;

        cout << Mahasiswa::nama << "\n";
        cout << Mahasiswa::NPM << "\n";
        cout << Mahasiswa::jurusan << "\n";
        cout << Mahasiswa::IPK << "\n";
    }
};

int main(int argc, char const *argv[])
{
    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << "\n";
    // cout << objectPolos.dataInteger << "\n";
    string inputNama;
    string inputNPM;
    string inputJurusan;
    double inputIPK;

cout << "Masukkan nama: ";
getline(cin, inputNama);
cout << "Masukkan NPM: ";
cin >> inputNPM;
cin.ignore();
cout << "Masukkan jurusan: ";
getline(cin, inputJurusan);
cout << "Masukkan IPK: ";
cin >> inputIPK;

Mahasiswa mahasiswa1 = Mahasiswa(inputNama, inputNPM, inputJurusan, inputIPK);
Mahasiswa mahasiswa2 = Mahasiswa("Riri", "2257051003", "Ilmu Komputer", 3.71);

return 0;
}
