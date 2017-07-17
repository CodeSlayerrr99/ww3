#include <iostream>
#include "Time.h"
#include <stdexcept>

using namespace std;

Time::Time(const int &hour, const int &minute, const int &second)
{
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

int Time::getHour() const
{
    return hour;
}

Time & Time::setHour(const int &hour)
{
    if(hour>=0 && hour<=23)
        this->hour=hour;
    else
        throw invalid_argument("Invalid hour! Hour shall be between 0 and 23.");
    return *this;
}

int Time::getMinute() const
{
    return minute;
}

Time & Time::setMinute(const int &minute)
{
    if(minute>=0 && minute<=59)
        this->minute=minute;
    else
        throw invalid_argument("Invalid minute! Minute shall be between 0 and 59.");
    return *this;
}

int Time::getSecond() const
{
    return second;
}

Time & Time::setSecond(const int &second)
{
    if(second>=0 && second<=59)
        this->second=second;
    else
        throw invalid_argument("Invalid second! Second shall be between 0 and 59");
    return *this;
}

Time & Time::setTime(const int &hour, const int &minute, const int &second)
{
    setHour(hour);
    setMinute(minute);
    setSecond(second);
    return *this;
}

void Time::print() const
{
    if(hour<10)
        cout<<0;
    cout<<hour<<':';

    if(minute<10)
        cout<<0;
    cout<<minute<<':';

    if(second<10)
        cout<<0;
    cout<<second<<'\n';
}

Time & Time::nextSecond()
{
    second++;
    if(second==60)
    {
        second=0;
        minute++;

        if(minute==60)
        {
            minute=0;
            hour++;

            if(hour==60)
                hour=0;
        }
    }
    return *this;
}
