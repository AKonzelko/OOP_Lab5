#include "MusicalInstruments.h"

MusicalInstrument::MusicalInstrument() : name("Невідомий"), price(0.0) {
    cout << "Конструктор MusicalInstrument\n";
}
MusicalInstrument::MusicalInstrument(string name, double price)
    : name(name), price(price) {
    cout << "Конструктор MusicalInstrument (параметри)\n";
}
MusicalInstrument::~MusicalInstrument() {
    cout << "Деструктор MusicalInstrument\n";
}
void MusicalInstrument::Play() {
    cout << name << " грає звичайний звук.\n";
}
void MusicalInstrument::ShowInfo() {
    cout << "Інструмент: " << name << ", Ціна: $" << price << "\n";
}

Acoustic::Acoustic() {
    cout << "Конструктор Acoustic\n";
}
Acoustic::Acoustic(string name, double price) : MusicalInstrument(name, price) {
    cout << "Конструктор Acoustic (параметри)\n";
}
Acoustic::~Acoustic() {
    cout << "Деструктор Acoustic\n";
}

Electronic::Electronic() {
    cout << "Конструктор Electronic\n";
}
Electronic::Electronic(string name, double price) : MusicalInstrument(name, price) {
    cout << "Конструктор Electronic (параметри)\n";
}
Electronic::~Electronic() {
    cout << "Деструктор Electronic\n";
}

ElectricGuitar::ElectricGuitar(string name, double price, int strings)
    : MusicalInstrument(name, price), Acoustic(name, price), Electronic(name, price), strings(strings) {
    cout << "Конструктор ElectricGuitar\n";
}

void ElectricGuitar::Play() {
    cout << name << " (електрогітара з " << strings << " струнами) гуде і грає соло.\n";
}

void ElectricGuitar::ShowInfo() {
    cout << "Електро-гітара: " << name << ", Ціна: $" << price << ", Струни: " << strings << "\n";
}

ElectricGuitar::~ElectricGuitar() {
    cout << "Деструктор ElectricGuitar\n";
}