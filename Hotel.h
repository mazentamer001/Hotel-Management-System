#ifndef HOTEL_H
#define HOTEL_H

#include "UserManager.h"
#include "RoomManager.h"
#include "BookingManager.h"
#include "PaymentManager.h"

class Hotel {
public:
    UserManager* userManager;
    RoomManager* roomManager;
    BookingManager* bookingManager;
    PaymentManager* paymentManager;
};

#endif