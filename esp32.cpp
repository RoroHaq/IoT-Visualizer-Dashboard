#include <iostream>
#include <queue>
#include <mutex>
#include <string>

class Esp32Sim
{
private:
    std::string deviceID;
    std::queue<uint8_t> dataBuffer;
    std::mutex bufferMutex; //Needed for not losing data when communicating to a different thread (other esp32 instance)
    bool isCOnnected = false;
    Esp32Sim* connectedDevice = nullptr;
}