#include <iostream>
using namespace std;

class mahasiswa{
    public :
    int nim;

    void showNim(){
        cout <<" No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1};  //object mhs
    mhs.showNim(); //member acces operator

    mahasiswa &refMhs = mhs; //pinter reference refMhs
    refMhs.nim = 2; //member acces operaror
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer deferencence pmhs
}