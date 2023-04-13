#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
private:
    /* data */
public:
    string nama;
    double IPK;

    Mahasiswa(string nama, double IPK)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = IPK;
    }

    // method tanpa parameter dan tanpa return
    void tampilkanInfo()
    {
        cout << "Nama saya " << nama << ", IPK saya adalah";
        cout << IPK << "\n";
    }

    //method dengan parameter dan tanpa return
    void ubahNama(const char*  namaBaru){
        Mahasiswa::nama = namaBaru;
    }

    //method tanpa parameter dan dengan return
    string getNama(){
        return Mahasiswa::nama;
    }

    double getIPK(){
        return IPK;
    }

    //method dengan parameter dan dengan return
    double katrolIPK(const double &tambahanNilai){
        return Mahasiswa::IPK + tambahanNilai;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("Rifqi", 3.7);
    mahasiswa1.tampilkanInfo();

    Mahasiswa mahasiswa2 = Mahasiswa("Ucup", 3.3);

    mahasiswa1.ubahNama("Rianto");
    mahasiswa1.tampilkanInfo();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << "\n";
    cout << "dataIPK = " << mahasiswa1.getIPK() << "\n";
    cout << "nilai katrol = " << mahasiswa2.katrolIPK(-2.23) << "\n";
    return 0;

    
}
