#include <iostream>
#include "vector"

using std::vector, std::string, std::cout;

template<typename T>
vector<T> intersection(const vector<T> &v1, const vector<T> &v2){
    vector<T> v3;
    for (int it  = 0; it < v1.size(); it++){
        for (int j = 0; j < v2.size(); j++){
            if (v2[j] == v1[it]) v3.push_back(v1[it]);
        }
    }
    return v3;
}

int main() {

    vector<string> s1 = {"453", "55", "985", "54", "0"};
    vector<string> s2 = {"453", "65", "95", "54", "0"};

    vector<string> s3 = intersection(s1, s2);

    for (string it : s3){
        cout<<it<<std::endl;
    }

    return 0;
}
