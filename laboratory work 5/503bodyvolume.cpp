#include <iostream>


class Body {
public:
    Body(int length = 0, int width = 0, int height = 0) : length(abs(length)), width(abs(width)), height(abs(height)) {}

    int getVolume() {
        return length * width * height;
    }

private:
    int length;
    int width;
    int height;
};

enum Parameters {
    length,
    width,
    position
};



static std::string stringBuild(Parameters s = length){
    if (s == length) return "Enter body's length: ";
    else if (s == width) return "Enter body's width: ";
    else if (s == position) return "Enter body's position: ";
}

static void inputNumber(int &number, Parameters s){
    std::cout << stringBuild(s) << std::endl;
    std::cin >> number;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << stringBuild(s) << std::endl;
        std::cin >> number;
    };
}

int main() {

    constexpr int bodyCount = 3;
    Body array[bodyCount];


    for (int it = 0; it < bodyCount; it++) {
        int a, b, c;

        inputNumber(a, length);
        inputNumber(b, width);
        inputNumber(c, position);

        array[it] = Body(a, b, c);

    }
    for (Body body : array) {
        std::cout<<"The volume is "<<body.getVolume()<<std::endl;
    }

    return 0;
}
