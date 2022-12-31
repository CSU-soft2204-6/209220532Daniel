#include <iostream>

using std::cout, std::cin, std::endl;


static void sortArray(int *array, int size) {

    bool changed;
    do {
        changed = false;
        for (auto j = 0; j < size - 1; j++)
            if (array[j] > array[j + 1]) {
                auto temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                changed = true;
            }
    } while (changed);
}

static int getNumber(int position) {

    int number = -1;

    printf("Input number %d:", position + 1);
    cin >> number;

    while (cin.fail()) {
        cin.clear();
        cin.ignore();
        printf("Input number %d:", position + 1);
        cin >> number;
    };

    return number;
}

int main() {


    constexpr int arraySize = 5;

    auto *array = new int[arraySize];

    for (auto it = 0; it < arraySize; it++) {

        array[it] = getNumber(it);

    }


    sortArray(array, arraySize);

    int *pArray = array;

    for (auto it = 0; it < arraySize; it++) {
        cout << *array++ << endl;
    }

    delete[] pArray;

    return 0;
}
