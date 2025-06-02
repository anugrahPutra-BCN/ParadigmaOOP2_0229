#include <iostream>
using namespace std;

class remotelampu
{
private:
     string saklarNo[10];


public:
     void setSaklarNo(int i, string value)
     {
        saklarNo[i] = value;
     }
     string getSaklarNo(int i)
     {
        return saklarNo[i];
     }
};

int main()
{
    remotelampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "lampu Dapur");

    cout <<  lampuRumah.getSaklarNo(0) << endl;
    cout <<  lampuRumah.getSaklarNo(1) << endl;
    cout <<  lampuRumah.getSaklarNo(2) << endl;
    cout <<  lampuRumah.getSaklarNo(3) << endl;

    return 0;
}