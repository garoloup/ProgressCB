#include "HMI.h"
#include <iostream>

void HMI::init() {
    callback = std::bind(&HMI::progressCallback, this, std::placeholders::_1, std::placeholders::_2);
    model.setProgressCallback(callback);
}

void HMI::startProcessing() {
    model.longRunningProcess();
}

void HMI::progressCallback(const std::string& message, float percentage) {
    std::cout << "Progress: " << message << " (" << percentage << "%)" << std::endl;
}