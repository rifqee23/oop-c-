#include <iostream>
#include <string>

using namespace std;


class DenganConstructor{
    public:
        string data;

        DenganConstructor(const char* data){
            DenganConstructor::data = data; 
        }

        void show(){
            cout << "ini adalah " << DenganConstructor::data << endl;
        }

};

class TanpaConstructor{
    public:
        string data;
        void show(){
            cout << "ini adalah " << TanpaConstructor::data << endl;
        }
};

int main(int argc, char const *argv[])
{
    //object tanpa constructor
    TanpaConstructor obj1;
    obj1.data = "object 1";
    obj1.show();

    //object dengan constructor
    DenganConstructor obj2 = DenganConstructor("object2");
    obj2.show();

    //cara lain membuat object dengan constructor
    DenganConstructor obj3("object3");
    obj3.show();

    //cara membuat object pada heap memory
    DenganConstructor* obj4 = new DenganConstructor("object4");
    (*obj4).show();  //cara dereference
    obj4 -> show(); //arrow operator. Mapping function atau atribut dalam pointer
    cout << obj4 -> data << endl;
    string data = obj4 -> data;
    cout << data << endl;

    DenganConstructor* obj5;
    obj5 = new  DenganConstructor("object 5");
    obj5 -> show();
    return 0;
}
