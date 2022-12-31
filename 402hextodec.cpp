#include <iostream>
#include <valarray>


constexpr int BAD_VALUE = -1;
constexpr int hexDigits = 16;
constexpr char hexDecimals[hexDigits] = {'0',
                                         '1',
                                         '2',
                                         '3',
                                         '4',
                                         '5',
                                         '6',
                                         '7',
                                         '8',
                                         '9',
                                         'A',
                                         'B',
                                         'C',
                                         'D',
                                         'E',
                                         'F'};

static size_t strLength(const char *s) {
    size_t len = 0;
    while (*s != '\0') {
        s++;
        len++;
    }
    return len;
}

//returns a number raised to a power
static int powerOf(int number, int power) {
    if (power == 0) {
        return 1;
    }
    int value = number;
    for (int it = 1; it < power; it++, value *= number);
    return value;
}

//if char value is hex, function returns a corresponding int value
static int isHex(char value) {

    for (int it = 0; it < hexDigits; it++) {
        if (value == hexDecimals[it]) return it;
    }
    return BAD_VALUE;
}

static int parseHex(const char *const hexString) {

    int result = 0;
    size_t length = strLength(hexString);

    //checking every element of the hexString
    for (int it = 0; it < length; it++) {
        int value = isHex(hexString[it]);

        //if char isn't a hex digit return -1
        if (value == BAD_VALUE) return BAD_VALUE;

        result += (value * powerOf(16, length - it - 1));
    }

    return result;
}


int main() {


    std::cout << parseHex("BCF231") << std::endl;

    return 0;
}
