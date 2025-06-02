#include <iostream>
using namespace std;

class mahasiswa
{
private:
     string nim;
protected:
     string nama;
     string prodi;
public:
     virtual void profilMhs() = 0;

     mahasiswa(string pNama, string pNim, string pProdi)
     nim(pNim), nama(pnama), prodi(pProdi)
     {

     }

     void setNama(string pNama){
        nama = pNama
     }
     string setNim(string pNim){
        nim = pNim
     }


};

//interhance
class maba : public mahasiswa
{
public:
     
    maba(string pNama, string pNim, string pProdi)
}

int main()
{
    mahasiswa *mhs;
    maba lintang("Lintang", "2024000", "SI");
    mhsTua gibran("gibran", "2017000" "TI");

    mhs = *
}