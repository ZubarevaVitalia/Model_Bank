#pragma once
class Clerk
{
public:
    int clerkWorkingTime = 0;
    int endTime = 0;
    //��������� ������� ���������� ������ � ��������� ���������� ������� ������ ������
    void setEndTime(int time);
    void newDay();
    bool busy = false;
};

