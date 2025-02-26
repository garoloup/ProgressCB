#include "HMI.h"

int main() {
    HMI hmi;
    hmi.init(); // Initialiser la callback
    hmi.startProcessing(); // Démarrer le traitement
    return 0;
}