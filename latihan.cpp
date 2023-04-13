#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Mahasiswa{
    public:
        string Nama;
        string NPM;
        string Jurusan;

        Mahasiswa(string Nama, string NPM, string Jurusan){
            Mahasiswa::Nama = Nama;
            Mahasiswa::NPM = NPM;
            Mahasiswa::Jurusan = Jurusan;
        }

        string stringify(){
            return  "\n" + Nama + " " + NPM + " " + Jurusan;
        }
};

class Dbase{
    public:
        ifstream in;
        ofstream out;
        string fileName;    

        Dbase(const char* fileName){
            Dbase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout << data.Nama << "\n";
            cout << data.NPM << "\n";
            cout << data.Jurusan << "\n";

            Dbase::out.open(Dbase::fileName,ios::app);
            Dbase::out << data.stringify();

        }

        void showAll(){
            Dbase::in.open(Dbase::fileName,ios::in);
            string nama, NPM, jurusan;
            int index = 1;

            while(!Dbase::in.eof()){
                Dbase::in >> nama;
                Dbase::in >> NPM;
                Dbase::in >> jurusan;
                cout << index++ << ".\t";
                cout << nama << " ";
                cout << NPM << " ";
                cout << jurusan << "\n";
            }
            Dbase::in.close();
        }
};

int main(int argc, char const *argv[])
{
    // membuat object-object yang diperlukan
    Dbase database = Dbase("data.txt");
    database.showAll();

    // input user
    string nama,NIM,jurusan;
    cout << "MASUKAN DATA MAHASISWA" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> NIM;
    cout << "Jurusan : ";
    cin >> jurusan;
    
    Mahasiswa dataMahasiswa = Mahasiswa(nama,NIM,jurusan);

    // save data ke database
    database.save(dataMahasiswa);

    // tampilan seluruh data di database
    database.showAll();
    return 0;
}
