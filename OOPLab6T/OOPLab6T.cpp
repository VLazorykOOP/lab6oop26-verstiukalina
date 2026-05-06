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

class Dani {
public:
    Dani() {
        cout << "Клас Dani створено\n";
    }

    virtual ~Dani() {
        cout << "Клас Dani видалено\n";
    }

    virtual void pokazaty() = 0;
    virtual void zberehty() = 0;
    virtual void obrobyty() = 0;
};

class SyhnalniDani : public Dani {
private:
    int amplituda;
    int chastota;

public:
    SyhnalniDani() : amplituda(10), chastota(50) {
        cout << "Клас SyhnalniDani створено\n";
    }

    SyhnalniDani(int a, int ch) : amplituda(a), chastota(ch) {
        cout << "Клас SyhnalniDani створено\n";
    }

    ~SyhnalniDani() override {
        cout << "Клас SyhnalniDani видалено\n";
    }

    void pokazaty() override {
        cout << "Сигнальні дані\n";
        cout << "Амплітуда: " << amplituda << endl;
        cout << "Частота: " << chastota << endl;
    }

    void zberehty() override {
        ofstream file("syhnal.txt");
        file << "Сигнальні дані\n";
        file << "Амплітуда: " << amplituda << endl;
        file << "Частота: " << chastota << endl;
        file.close();
        cout << "Сигнальні дані збережено у файл syhnal.txt\n";
    }

    void obrobyty() override {
        amplituda = amplituda * 2;
        cout << "Сигнальні дані оброблено\n";
    }
};

class DaniRezultatuObrobky : public Dani {
private:
    int rezultat;

public:
    DaniRezultatuObrobky() : rezultat(100) {
        cout << "Клас DaniRezultatuObrobky створено\n";
    }

    DaniRezultatuObrobky(int r) : rezultat(r) {
        cout << "Клас DaniRezultatuObrobky створено\n";
    }

    ~DaniRezultatuObrobky() override {
        cout << "Клас DaniRezultatuObrobky видалено\n";
    }

    void pokazaty() override {
        cout << "Дані результату обробки\n";
        cout << "Результат: " << rezultat << endl;
    }

    void zberehty() override {
        ofstream file("rezultat.txt");
        file << "Дані результату обробки\n";
        file << "Результат: " << rezultat << endl;
        file.close();
        cout << "Дані результату збережено у файл rezultat.txt\n";
    }

    void obrobyty() override {
        rezultat = rezultat + 10;
        cout << "Дані результату оброблено\n";
    }
};

class DopomizhniDani : public Dani {
private:
    int koefitsient;

public:
    DopomizhniDani() : koefitsient(5) {
        cout << "Клас DopomizhniDani створено\n";
    }

    DopomizhniDani(int k) : koefitsient(k) {
        cout << "Клас DopomizhniDani створено\n";
    }

    ~DopomizhniDani() override {
        cout << "Клас DopomizhniDani видалено\n";
    }

    void pokazaty() override {
        cout << "Допоміжні дані\n";
        cout << "Коефіцієнт: " << koefitsient << endl;
    }

    void zberehty() override {
        ofstream file("dopomizhni.txt");
        file << "Допоміжні дані\n";
        file << "Коефіцієнт: " << koefitsient << endl;
        file.close();
        cout << "Допоміжні дані збережено у файл dopomizhni.txt\n";
    }

    void obrobyty() override {
        koefitsient = koefitsient * koefitsient;
        cout << "Допоміжні дані оброблено\n";
    }
};

void zadacha2() {
    cout << "\nЗАДАЧА 2\n";
    cout << "Абстрактний клас Dani та похідні класи\n\n";

    Dani* dani[3];

    dani[0] = new SyhnalniDani();
    dani[1] = new DaniRezultatuObrobky();
    dani[2] = new DopomizhniDani();

    for (int i = 0; i < 3; i++) {
        cout << endl;
        dani[i]->pokazaty();
        dani[i]->obrobyty();
        dani[i]->pokazaty();
        dani[i]->zberehty();
    }

    for (int i = 0; i < 3; i++) {
        delete dani[i];
    }
}

void vykonatyZadachu2ZDanymy(int amplituda, int chastota, int rezultat, int koefitsient) {
    Dani* dani[3];

    dani[0] = new SyhnalniDani(amplituda, chastota);
    dani[1] = new DaniRezultatuObrobky(rezultat);
    dani[2] = new DopomizhniDani(koefitsient);

    for (int i = 0; i < 3; i++) {
        cout << endl;
        dani[i]->pokazaty();
        dani[i]->obrobyty();
        dani[i]->pokazaty();
        dani[i]->zberehty();
    }

    for (int i = 0; i < 3; i++) {
        delete dani[i];
    }
}

void vvidZKlaviaturyZadacha2() {
    int a, ch, r, k;
    cout << "Введіть амплітуду, частоту, результат, коефіцієнт: ";
    cin >> a >> ch >> r >> k;
    vykonatyZadachu2ZDanymy(a, ch, r, k);
}

void vvidZFailyZadacha2() {
    int a, ch, r, k;
    ifstream file("zadacha2.txt");
    file >> a >> ch >> r >> k;
    vykonatyZadachu2ZDanymy(a, ch, r, k);
}

void vvidRandomnoZadacha2() {
    vykonatyZadachu2ZDanymy(vypadkoveChyslo(), vypadkoveChyslo(), vypadkoveChyslo(), vypadkoveChyslo());
}

class Liudyna {
protected:
    int vik;

public:
    Liudyna() : vik(35) {
        cout << "Клас Liudyna створено\n";
    }

    Liudyna(int v) : vik(v) {
        cout << "Клас Liudyna створено\n";
    }

    virtual ~Liudyna() {
        cout << "Клас Liudyna видалено\n";
    }

    virtual void pokazaty() {
        cout << "Людина, вік: " << vik << endl;
    }
};

