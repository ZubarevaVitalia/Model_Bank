#pragma once
#include <vector>
#include <queue>
#include "Clerk.h"
#include "Request.h"
class Bank
{
public:
    std::vector <Clerk> clerks;
    std::queue <Request> requests;
    int profit = 0;
    int numbServedClients = 0;
    int amountOfWaitingTime = 0;
    Bank(int numbClerks);
    //ѕолучение длины нынешней очереди
    int getQueueLength();
    //ѕоставить за€вку в очередь
    void putRequestToQueue(Request req);
    //ѕоиск свободного клерка, time- нынешнее врем€
    int searchFreeClerk(int time);
    //ƒать за€вку клерку: изменить EndTime клерка, изменить кол-во обслужанных клиентов и среднее врем€ ожидани€
    std::pair<int, int> giveRequestToClerk(int time);
};

