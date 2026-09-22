#include <iostream>
#include <string>

void greet(const std::string& name) {
    std::cout << "Hello, " << name << "! Gate G0 is underway." << std::endl;
}

int main() {
    greet("Ahnaaf");
    return 0;
}
