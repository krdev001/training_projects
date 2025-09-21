#include<iostream>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }
        void displayTime() {
            cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
        }
};

int main() {
    int h, m, s;
    cout << "Enter hours, minutes, and seconds: ";
    cin >> h >> m >> s;
    Time t(h, m, s);
    t.displayTime();
    return 0;
}