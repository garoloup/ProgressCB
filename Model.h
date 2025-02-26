#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <functional>

class Model {
public:
    void setProgressCallback(std::function<void(const std::string&, float)> callback);
    void longRunningProcess();

private:
    std::function<void(const std::string&, float)> progressCallback;
};

#endif // MODEL_H