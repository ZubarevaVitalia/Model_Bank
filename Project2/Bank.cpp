#include "Bank.h"

Bank::Bank(int numbClerks) {
    clerks.resize(numbClerks);
};
int Bank::getQueueLength() {
    return requests.size();
};
//Поставить заявку в очередь
void Bank::putRequestToQueue(Request req) {
    requests.push(req);
};
//Поиск свободного клерка, time- нынешнее время
int Bank::searchFreeClerk(int time) {
    for (int i; i < clerks.size(); i++) {
        if (clerks[i].endTime < time) {
            return i + 1;
        }
    }
    return 0;
};
//Дать заявку клерку: изменить EndTime клерка, изменить кол-во обслужанных клиентов и среднее время ожидания
std::pair<int, int> Bank::giveRequestToClerk(int time) {
    int k = searchFreeClerk(time);
    if ((k != 0) && (!requests.empty())) {
        Request req = requests.front();
        requests.pop();
        clerks[k - 1].setEndTime(req.serviceDuration);
        profit += req.profit;
        amountOfWaitingTime += (time - req.arrivalTime);
        numbServedClients++;
        return std::make_pair(req.number, k);
    }
    else {
        return std::make_pair(0, 0);
    }
};
