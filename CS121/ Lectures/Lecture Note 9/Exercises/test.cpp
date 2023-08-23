#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Press Enter to start the stopwatch...";
    cin.get();

    time_t startTime = time(nullptr);

    cout << "Stopwatch started! Press Enter to stop...";
    cin.get();

    time_t endTime = time(nullptr);

    time_t elapsedTime = endTime - startTime;

    int hours = elapsedTime / 3600;
    int minutes = (elapsedTime % 3600) / 60;
    int seconds = elapsedTime % 60;

    cout << "Elapsed time: " << hours << "h " << minutes << "m " << seconds << "s" << endl;

    return 0;
}
