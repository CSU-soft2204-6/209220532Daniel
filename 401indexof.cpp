#include <iostream>

using std::cout, std::endl;

constexpr int NO_MATCH = 1;
constexpr int MATCH = 0;
constexpr char NO_MATCH_STRING[] = {"-1"};

static size_t strLength(const char *s) {
    size_t len = 0;
    while (*s != '\0') {
        s++;
        len++;
    }
    return len;
}

//checks if s1 and s2 are the same char by char
static bool matchStr(const char *s1, const char *s2, size_t length) {
    for (int i = 0; i < length; i++) {
        char c = *s1++;
        char c2 = *s2++;
        //if chars don't exist for some reason
        if (!c || !c2) {
            return NO_MATCH;
        }
        if (c != c2) return NO_MATCH;
    }
    return MATCH;
}

static const char *indexOf(const char *s1, const char *s2) {
    char c;
    size_t len;

    c = *s1++;

    //if the first char doesn't exist, s1 is empty
    if (!c)
        return NO_MATCH_STRING;

    len = strLength(s1);

    do {
        char sChar;

        //trying to find the first char of s1 in s2
        do {
            sChar = *s2++;
            //if sChar doesn't exist, s2 is empty or at the end of iteration
            if (!sChar)
                return NO_MATCH_STRING;

        } while (sChar != c);
        //checking if the rest of the s1 is in s2
    } while (matchStr(s2, s1, len) != 0);

    return (char *) (s2 - 1);
}


int main() {

    constexpr char s1[] = {"hope"};
    constexpr char s2[] = {"I hope our teacher will get better soon"};

    cout << indexOf(s1, s2) << endl;


    return 0;
}
