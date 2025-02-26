#include "Model.h"
#include <thread>
#include <chrono>

void Model::setProgressCallback(std::function<void(const std::string&, float)> callback) {
    progressCallback = callback;
}

void Model::longRunningProcess() {
    for (int i = 0; i <= 100; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
        if (progressCallback) {
            progressCallback("Processing", static_cast<float>(i));
        }
    }
}