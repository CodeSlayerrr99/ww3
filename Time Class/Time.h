#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time(const int &hour=0, const int &minute=0, const int &second=0);

    int getHour() const;
    Time & setHour(const int &hour);

    int getMinute() const;
    Time & setMinute(const int &minute);

    int getSecond() const;
    Time & setSecond(const int &second);

    Time & setTime(const int &hour, const int &minute, const int &second);
    void print() const;
    Time & nextSecond();
};

#endif // TIME_H
