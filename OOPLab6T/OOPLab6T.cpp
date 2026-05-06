#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <windows.h>
using namespace std;

int vypadkoveChyslo() {
    return rand() % 100 + 1;
}

class Verh {
protected:
    int a;

public:
    Verh() : a(1) {
        cout << "Клас Verh створено\n";
    }

    Verh(int value) : a(value) {
        cout << "Клас Verh створено\n";
    }

    ~Verh() {
        cout << "Клас Verh видалено\n";
    }
};

class LivaHilka : public Verh {
protected:
    int b;

public:
    LivaHilka() : b(2) {
        cout << "Клас LivaHilka створено\n";
    }

    LivaHilka(int value) : b(value) {
        cout << "Клас LivaHilka створено\n";
    }

    ~LivaHilka() {
        cout << "Клас LivaHilka видалено\n";
    }
};

class PravaHilka : public Verh {
protected:
    int c;

public:
    PravaHilka() : c(3) {
        cout << "Клас PravaHilka створено\n";
    }

    PravaHilka(int value) : c(value) {
        cout << "Клас PravaHilka створено\n";
    }

    ~PravaHilka() {
        cout << "Клас PravaHilka видалено\n";
    }
};

class Seredyna : public LivaHilka, public PravaHilka {
protected:
    int d;

public:
    Seredyna() : d(4) {
        cout << "Клас Seredyna створено\n";
    }

    Seredyna(int value) : d(value) {
        cout << "Клас Seredyna створено\n";
    }

    ~Seredyna() {
        cout << "Клас Seredyna видалено\n";
    }
};

class Nyz : public LivaHilka, public Seredyna, public PravaHilka {
protected:
    int e;

public:
    Nyz() : e(5) {
        cout << "Клас Nyz створено\n";
    }

    Nyz(int value) : e(value) {
        cout << "Клас Nyz створено\n";
    }

    ~Nyz() {
        cout << "Клас Nyz видалено\n";
    }
};

class VirtualnyiVerh {
protected:
    int a;

public:
    VirtualnyiVerh() : a(1) {
        cout << "Клас VirtualnyiVerh створено\n";
    }

    VirtualnyiVerh(int value) : a(value) {
        cout << "Клас VirtualnyiVerh створено\n";
    }

    ~VirtualnyiVerh() {
        cout << "Клас VirtualnyiVerh видалено\n";
    }
};

class VirtualnaLivaHilka : virtual public VirtualnyiVerh {
protected:
    int b;

public:
    VirtualnaLivaHilka() : b(2) {
        cout << "Клас VirtualnaLivaHilka створено\n";
    }

    VirtualnaLivaHilka(int value) : b(value) {
        cout << "Клас VirtualnaLivaHilka створено\n";
    }

    ~VirtualnaLivaHilka() {
        cout << "Клас VirtualnaLivaHilka видалено\n";
    }
};

class VirtualnaPravaHilka : virtual public VirtualnyiVerh {
protected:
    int c;

public:
    VirtualnaPravaHilka() : c(3) {
        cout << "Клас VirtualnaPravaHilka створено\n";
    }

    VirtualnaPravaHilka(int value) : c(value) {
        cout << "Клас VirtualnaPravaHilka створено\n";
    }

    ~VirtualnaPravaHilka() {
        cout << "Клас VirtualnaPravaHilka видалено\n";
    }
};

class VirtualnaSeredyna : virtual public VirtualnaLivaHilka, virtual public VirtualnaPravaHilka {
protected:
    int d;

public:
    VirtualnaSeredyna() : d(4) {
        cout << "Клас VirtualnaSeredyna створено\n";
    }

    VirtualnaSeredyna(int value) : d(value) {
        cout << "Клас VirtualnaSeredyna створено\n";
    }

    ~VirtualnaSeredyna() {
        cout << "Клас VirtualnaSeredyna видалено\n";
    }
};

class VirtualnyiNyz : virtual public VirtualnaLivaHilka, virtual public VirtualnaSeredyna, virtual public VirtualnaPravaHilka {
protected:
    int e;

public:
    VirtualnyiNyz() : e(5) {
        cout << "Клас VirtualnyiNyz створено\n";
    }

    VirtualnyiNyz(int value) : e(value) {
        cout << "Клас VirtualnyiNyz створено\n";
    }

    ~VirtualnyiNyz() {
        cout << "Клас VirtualnyiNyz видалено\n";
    }
};

void zadacha1() {
    cout << "\nЗАДАЧА 1\n";
    cout << "Успадкування без virtual\n";

    Verh objVerh;
    LivaHilka objLivaHilka;
    PravaHilka objPravaHilka;
    Seredyna objSeredyna;
    Nyz objNyz;

    cout << "\nРозміри класів без virtual:\n";
    cout << "sizeof(Verh) = " << sizeof(Verh) << " байт\n";
    cout << "sizeof(LivaHilka) = " << sizeof(LivaHilka) << " байт\n";
    cout << "sizeof(PravaHilka) = " << sizeof(PravaHilka) << " байт\n";
    cout << "sizeof(Seredyna) = " << sizeof(Seredyna) << " байт\n";
    cout << "sizeof(Nyz) = " << sizeof(Nyz) << " байт\n";

    cout << "\nУспадкування з virtual\n";

    VirtualnyiVerh objVirtualnyiVerh;
    VirtualnaLivaHilka objVirtualnaLivaHilka;
    VirtualnaPravaHilka objVirtualnaPravaHilka;
    VirtualnaSeredyna objVirtualnaSeredyna;
    VirtualnyiNyz objVirtualnyiNyz;

    cout << "\nРозміри класів з virtual:\n";
    cout << "sizeof(VirtualnyiVerh) = " << sizeof(VirtualnyiVerh) << " байт\n";
    cout << "sizeof(VirtualnaLivaHilka) = " << sizeof(VirtualnaLivaHilka) << " байт\n";
    cout << "sizeof(VirtualnaPravaHilka) = " << sizeof(VirtualnaPravaHilka) << " байт\n";
    cout << "sizeof(VirtualnaSeredyna) = " << sizeof(VirtualnaSeredyna) << " байт\n";
    cout << "sizeof(VirtualnyiNyz) = " << sizeof(VirtualnyiNyz) << " байт\n";
}

void vykonatyZadachu1ZDanymy(int a, int b, int c, int d, int e) {
    cout << "\nДані задачі 1: " << a << " " << b << " " << c << " " << d << " " << e << endl;
    Verh objVerh(a);
    LivaHilka objLivaHilka(b);
    PravaHilka objPravaHilka(c);
    Seredyna objSeredyna(d);
    Nyz objNyz(e);
    VirtualnyiNyz objVirtualnyiNyz(e);
}

void vvidZKlaviaturyZadacha1() {
    int a, b, c, d, e;
    cout << "Введіть 5 чисел для задачі 1: ";
    cin >> a >> b >> c >> d >> e;
    vykonatyZadachu1ZDanymy(a, b, c, d, e);
}

void vvidZFailyZadacha1() {
    int a, b, c, d, e;
    ifstream file("zadacha1.txt");
    file >> a >> b >> c >> d >> e;
    vykonatyZadachu1ZDanymy(a, b, c, d, e);
}

void vvidRandomnoZadacha1() {
    vykonatyZadachu1ZDanymy(vypadkoveChyslo(), vypadkoveChyslo(), vypadkoveChyslo(), vypadkoveChyslo(), vypadkoveChyslo());
}
