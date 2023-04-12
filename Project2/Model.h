#pragma once
#include "Bank.h"
#include "Request.h"
#include <string>
ref class Model
{
public:
    Bank* bank;
    int numbDepartedClients = 0;
    int avarageWaitingTime;
    int avarageWorkingTime;
    int avarageQueueLength;
    int amountQueueLength = 0;
    int amountTime = 0;
    int modelStep = 10;
    int numbClerks = 2;
    int maxQueueLength = 20;
    int timeUntilRequest = 0;
    std::pair<int, int>* info;
    //enum Days {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    //Days day = Mon;// Пн, Вт, Ср,Чт, Пт, Сб
    int time;// Время в минутах от начала рабочего дня
    int days = 1;
    int number;
    void Start();
    void Step();
    std::pair<int, int> Minute();
    void End();
    void Again();
    //Генерация заявки, если ее можно поставить в очередь, иначе изменение кол-ва ушедших клиентов
    void generateRequest();
    //Генерация времени до появления следующей
    void generateTimeUntilRequest();
    void statistic();
    System::String^ strTime();
    System::String^ stTime(int tm);
};

