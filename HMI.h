#ifndef HMI_H
#define HMI_H

#include <string>
#include <functional>
#include "Model.h"

class HMI {
public:
    void init();
    void startProcessing();
    void progressCallback(const std::string& message, float percentage);

private:
    std::function<void(const std::string&, float)> callback;
    Model model; // Instance de Model comme variable membre
};

#endif // HMI_H