#include <iostream>
#include <chrono>
#include <thread>


int main() {
    int width, length;
    std::cin >> width >> length;
    //std::cin >> width;
    //std::cin >> length; ¿Í °°À½.

    std::cout << width << std::endl << length << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(4));

    return 0;
}