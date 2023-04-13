#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NPM;
    string jurusan;
    double IPK;

private:
protected:
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Rifqi";
    data1.NPM = "2257051008";
    data1.jurusan = "Ilmu Komputer";
    data1.IPK = 3.19;
    Mahasiswa data2;
    data2.nama = "Riri";
    data2.NPM = "2257051003";
    data2.jurusan = "Ilmu Komputer";
    data2.IPK = 3.4;

    cout << "Nama dari data1: " << data1.nama << "\n";
    cout << "NPM dari data1:" << data1.NPM << "\n";
    cout << "Jurusan dari data1: " << data1.jurusan << "\n";
    cout << "IPK dari data1: " << data1.IPK << "\n";

    cout << "\n";

    cout << "Nama dari data2: " << data2.nama << "\n";
    cout << "NPM dari data2: " << data2.NPM << "\n";
    cout << "Jurusan dari data2: " << data2.jurusan << "\n";
    cout << "IPK dari data2: " << data2.IPK << "\n";
    return 0;
}