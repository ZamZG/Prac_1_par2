#include <iostream>
using namespace std;

    class GatoSimple
    {
    public:
    GatoSimple ()
    {
    suedad = 2;
    }
    ~GatoSimple()
    {
    }
    int Obteneredad ()
    const
    {
    return suedad;
    }
    void Asignaredad (int edad)
    {
    suedad = edad;
    }
    private:
    int suedad;
    };


    int main()
    {
    GatoSimple *Pelusa = new GatoSimple;
    cout << "Pelusa tiene " << Pelusa -> Obteneredad();
    cout << "anios de edad " << endl;
    Pelusa -> Asignaredad (5);
    cout << "Pelusa tiene " << Pelusa -> Obteneredad();
    cout << "anios de edad " << endl;
    delete Pelusa;
    return 0;
    }
