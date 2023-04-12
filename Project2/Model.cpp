#include "Model.h"
#include "Request.h"
#include <random>

void Model::Start() {
    bank = new Bank(numbClerks);
    info = new std::pair<int, int>{ 0,0 };
    time = 0;
};
void Model::Step() {
    int k = days % 7;
    int maxTime;
    if (k == 0) {
        maxTime = 0;
    }
    else if (k == 6) {
        maxTime = 360;
    }
    else {
        maxTime = 480;
    }
    std::pair<int, int> non = std::make_pair(0, 0);
    if ((time + modelStep) > maxTime) {
        while (time < maxTime) {
            Minute();
            time++;
            amountTime++;
        }
        time = 0;
        days++;
        *info = std::make_pair(0, 0);
        numbDepartedClients += bank->requests.size();
        number = 0;
        while (!bank->requests.empty()){
            bank->requests.pop();
        }
        for (int i = 0; i < numbClerks; i++) {
            bank->clerks[i].endTime = 0;
        }
    }
    else {
        for (int i = 0; i < modelStep; i++) {
            std::pair<int, int> inf = Minute();
            if (inf != non) { 
                *info = inf;
            }
            time++;
            amountTime++;
        }
    }
    avarageWaitingTime = bank->amountOfWaitingTime / bank->numbServedClients;
    avarageWorkingTime = 0;
    for (int i = 0; i < numbClerks; i++) {
        avarageWorkingTime += bank->clerks[i].clerkWorkingTime;
    }
    avarageWorkingTime /= numbClerks;
    avarageQueueLength = amountQueueLength / amountTime;
};
std::pair<int, int> Model::Minute() {
    std::pair<int, int> non = std::make_pair(0, 0);
    std::pair<int, int> inf, lastinf;
    lastinf = bank->giveRequestToClerk(time);
    inf = lastinf;
    while (lastinf != non) {
        inf = lastinf;
        lastinf = bank->giveRequestToClerk(time);
    }
    amountQueueLength += bank->requests.size();
    if (timeUntilRequest == 0) {
        while (timeUntilRequest == 0) {
            generateRequest();
            generateTimeUntilRequest();
        }
    }
    else {
        timeUntilRequest--;
    }
    return inf;
}

void Model::End() {
    while (days < 30) {
        Step();
    }
};
void Model::Again() {
    time = 0;
    days = 1;
    number = 0;
    delete bank;
    delete info;
    numbDepartedClients = 0;
    avarageWaitingTime = 0;
    avarageWorkingTime = 0;
    avarageQueueLength = 0;
    timeUntilRequest = 0;

};
//Генерация заявки, если еe можно поставить в очередь, иначе изменение кол-ва ушедших клиентов
void Model::generateRequest() {
    if (bank->requests.size() < maxQueueLength) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> mon(50, 3000);
        std::uniform_int_distribution<> tm(2, 30);
        number++;
        Request req(tm(gen), mon(gen), time, number);
        bank->requests.push(req);
    }
    else {
        numbDepartedClients++;
    }
};
//Генерация времени до появления следующей
void Model::generateTimeUntilRequest() {
    std::random_device rd;
    std::mt19937 gen(rd());
    double b;
    if (((time / 60) >= 6) || (days % 7 >= 5)) {
        b = 5;
    }
    else {
        b = 10;
    };
    std::uniform_int_distribution<> dis(0.0, b);
    timeUntilRequest = dis(gen);
};
void Model::statistic() {};

System::String^ Model::strTime() {
    int hour = 9;
    int minutes;
    hour += time / 60;
    minutes = time % 60;
    System::String^ sTime = hour.ToString();
    sTime += ":";
    sTime += minutes.ToString();
    sTime += " День ";
    sTime += days.ToString();
    sTime += " ";
    switch (days % 7) {
        case 1:
            sTime += "Понедельник";
            break;
        case 2:
            sTime += "Вторник";
            break;
        case 3:
            sTime += "Среда";
            break;
        case 4:
            sTime += "Четверг";
            break;
        case 5:
            sTime += "Пятница";
            break;
        case 6:
            sTime += "Суббота";
            break;
        case 0:
            sTime += "Воскресенье";
            break;
    }
    return sTime;
};

System::String^ Model::stTime(int tm) {
    int hour = tm / 60;
    int minute = tm % 60;
    System::String^ sTime = hour.ToString() + " ч." + minute.ToString() + " м.";
    return sTime;
};