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
    //��������� ����� �������� �������
    int getQueueLength();
    //��������� ������ � �������
    void putRequestToQueue(Request req);
    //����� ���������� ������, time- �������� �����
    int searchFreeClerk(int time);
    //���� ������ ������: �������� EndTime ������, �������� ���-�� ����������� �������� � ������� ����� ��������
    std::pair<int, int> giveRequestToClerk(int time);
};

