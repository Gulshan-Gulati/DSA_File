// C++ Code on Computer
#include <iostream>
#include <serial/serial.h>
#include <string>

int main() {
    serial::Serial my_serial("/dev/ttyACM0", 9600, serial::Timeout::simpleTimeout(1000));

    if (my_serial.isOpen()) {
        std::cout << "Serial port opened successfully." << std::endl;
    } else {
        std::cerr << "Failed to open serial port." << std::endl;
        return 1;
    }

    while (true) {
        if (my_serial.available()) {
            std::string result = my_serial.read(my_serial.available());
            std::cout << "Read: " << result << std::endl;
        }
    }

    return 0;
}
