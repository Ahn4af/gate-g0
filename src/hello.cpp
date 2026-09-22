#include <iostream>
#include <string>

void greet(const std::string& name) {
    std::cout << "Hello, " << name  // oops: broke this on purpose
}

int main() {
    greet("Ahnaaf");
    return 0;
}
