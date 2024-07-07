#include <iostream>


class Foo {
public:
    Foo() = default;
    Foo(const Foo&) {
        std::cout << "Copy constructor called" << std::endl;
    }
    Foo(Foo&&) noexcept {
        std::cout << "Move constructor called" << std::endl;
    }
    // Move constructor is now defined
};



int main() {


    Foo temp;
    Foo z1 = std::move(temp);
}