#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class MyDate {
    public:
        int day;
        string month;
        int year;
};

class MyTime {
    public:
        int hour;
        int minute;
        int seconds;
};

void printDate(MyDate date, MyTime time) {
    cout << "Printing date and time with MyDate and Mytime Parameters" << endl;
    cout << "Current date is " << date.day << " " << date.month << " " << date.year << " " << time.hour << ":" << time.minute << ":" << time.seconds << endl << endl;
}
void printDate(MyDate date) {
    cout << "Printing date and time with MyDate Parameter" << endl;
    cout << "Current date is " << date.day << " " << date.month << " " << date.year << endl;
}

int main()
{

    time_t now = time(NULL);
    tm *local_time = localtime(&now);

    const char* months[] = { "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December" };

    MyDate date;
    date.day = local_time->tm_mday;
    date.month = months[local_time->tm_mon];
    date.year = local_time->tm_year + 1900;

    MyTime time;
    time.hour = local_time->tm_hour;
    time.minute = local_time->tm_min;
    time.seconds = local_time->tm_sec;

    printDate(date, time);
    printDate(date);

}
