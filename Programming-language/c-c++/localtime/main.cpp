#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t rawtime = time(NULL); // time(0);
    cout << "Rawtime: " << rawtime << " sec\n";

    struct tm *timeinfo = localtime(&rawtime);

    int Month, Day, Year;
    Month = timeinfo->tm_mon + 1;
    Day = timeinfo->tm_mday;
    Year = timeinfo->tm_year + 1900;

    cout << "\n" << Month << "/" << Day << "/" << Year << "\n\n";

    int Hour, Minute, Second;
    Hour = timeinfo->tm_hour;
    Minute = timeinfo->tm_min;
    Second = timeinfo->tm_sec;
    
    cout << Hour << " hr\n\n" <<  Minute << " min\n\n" << Second << " sec\n";

    return 0;
}