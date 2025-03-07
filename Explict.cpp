#include <iostream>

class Simple {
public:
    explicit Simple(int value) : data(value) {}

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    Simple obj(10); 
    obj.display();

    return 0;
}
