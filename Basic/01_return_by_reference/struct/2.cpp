#include<iostream>
#include<string>

using namespace std;

struct date {
    int day;
    int month;
    int year;
};

void print(struct date *date) {
    cout << "Date: " << date->day << "/" << date->month << "/" << date->year << endl;
}

int main() {
    struct date *d;
    d = new struct date;
    d->day = 5;
    d->month = 2;
    d->year = 2019;
    print(d);

    return 0;
}