#include <iostream>
#include "lab6/Logger.hpp"

int main() {
    std::string PATH = "log.txt";
    logger::Logger::includeFile(PATH);
    logger::Logger::info("Working now");
    logger::Logger::error("Exception");

    logger::Logger::d("start debugging");
    return 0;
}
