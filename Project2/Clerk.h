#pragma once
class Clerk
{
public:
    int clerkWorkingTime = 0;
    int endTime = 0;
    //Изменение времени завершения работы и изменение суммарного времени работы клерка
    void setEndTime(int time);
    void newDay();
    bool busy = false;
};

