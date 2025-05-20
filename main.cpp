#include "MusicalInstruments.h"

int main() {
    ElectricGuitar* eg = new ElectricGuitar("Fender Stratocaster", 999.99, 6);

    eg->Play();
    eg->ShowInfo();

    delete eg;

    return 0;
}