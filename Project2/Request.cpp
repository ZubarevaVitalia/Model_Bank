#include "Request.h"

Request::Request(int serviceDurat, int prof,
    int arrivalT, int numb) {
    serviceDuration = serviceDurat;
    profit = prof;
    arrivalTime = arrivalT;
    number = numb;
};