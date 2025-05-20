#ifndef MUSICALINSTRUMENTS_H
#define MUSICALINSTRUMENTS_H

#include <iostream>
#include <string>
using namespace std;

class MusicalInstrument {
protected:
    string name;
    double price;

public:
    MusicalInstrument();
    MusicalInstrument(string name, double price);

    virtual void Play();
    virtual void ShowInfo();

    virtual ~MusicalInstrument();
};

class Acoustic : virtual public MusicalInstrument {
public:
    Acoustic();
    Acoustic(string name, double price);
    virtual ~Acoustic();
};

class Electronic : virtual public MusicalInstrument {
public:
    Electronic();
    Electronic(string name, double price);
    virtual ~Electronic();
};

class ElectricGuitar : public Acoustic, public Electronic {
private:
    int strings;

public:
    ElectricGuitar(string name, double price, int strings);
    void Play() override;
    void ShowInfo() override;
    ~ElectricGuitar();
};

#endif