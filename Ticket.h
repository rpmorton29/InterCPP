//
//  Ticket.h
//  BaseBallTicket
//`
//  Created by Ryan Morton on 10/19/17.
//  Copyright © 2017 Ryan Morton. All rights reserved.
//

#ifndef Ticket_h
#define Ticket_h


#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <time.h>
#include <cctype>

using namespace std;

class Ticket{
    
private:
    //time_t dateTime = time(NULL);
    char row;
    int section = 0;
    int seat = 0;
    bool available = false;
    double price = 0;
    
public:
    Ticket();
    Ticket(int sec,char rw, int st, bool avail, double pr);
    void sellTicket(bool available);
    void refundTicket();
    void printTicket();
    void read();
    void menu();
    
    bool isAvailable() const {return available;}
    double getPrice() const {return price;}
    
}
;






#endif /* Ticket_h */
