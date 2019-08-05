//
//  main.cpp
//  BaseBallTicket
//
//  Created by Ryan Morton on 10/19/17.
//  Copyright © 2017 Ryan Morton. All rights reserved.
//


#include "Ticket.h"

Ticket::Ticket()
{
    //dateTime = time(NULL);
    row = 0;
    section = 0;
    seat = 0;
    available = false;
    price = 0;
}



Ticket::Ticket(int sec,char rw, int st, bool avail, double pr)
{
    //dateTime=dTn;
    section = sec;
    row = rw;
    seat = st;
    available = avail;
    price = pr;
    
}
void Ticket::sellTicket(bool available)
{

    if (available == true)
    {
        cout<< "OK, Sold" <<endl;
        printTicket();
        available = false;
    }
    else {
        cout<< "ticket not available "<< endl;
    }
}

void Ticket::printTicket()
{
    cout<< "" << " SEC:"<< section << " RW:" << row << " ST:"
    << seat << " Price:$" <<fixed <<setprecision(2) << price << endl;
}

void Ticket::refundTicket()
{
    cout<< "Refunded" << "$" << price << endl;
    available = true;

}

void Ticket::read()
{
cout<<"What section would you like"<< endl;
    cin>>section;
cout<<"What row?"<< endl;
    cin>>row;
cout<<"What seat?"<<endl;
    cin>>seat;
    //printTicket();
}


void Ticket::menu()
{
    cout<< "Ticket:";
    printTicket();

}
