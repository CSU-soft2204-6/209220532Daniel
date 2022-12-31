#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int sec;
public:
    int getHour() const {
        return hour;
    }

    void setHour(int hour) {
        Time::hour = hour;
    }

    int getMinute() const {
        return minute;
    }

    void setMinute(int minute) {
        Time::minute = minute;
    }

    int getSec() const {
        return sec;
    }

    void setSec(int sec) {
        Time::sec = sec;
    }
};


int main() {
    Time t1;
    int a;
    cin>>a;
    t1.setHour(a);
    cin>>a;
    t1.setMinute(a);
    cin>>a;
    t1.setSec(a);
    cout << t1.getHour() << ": " << t1.getMinute() << ": " << t1.getSec() << endl;
    return 0;
}
