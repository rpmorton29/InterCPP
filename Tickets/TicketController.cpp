/*
 ================================================================================
 * KEY for Project 2 BaseballTicket.cpp
 * Author: RMorton
 * Version: Created on Nov 3, 2017, updates 11/10/17
 * Copyright: By Ryan Morton for use as an assignment
 * Description: This program will utilize the class functions that have been 
 *created to print sell ect. for a user interact with the tickets . Written in
 *C++, Ansi-style.
 ================================================================================
 */


#include "Ticket.h"
void printsaleTicket (Ticket Amount[] , int n/*, Ticket& onSale*/);

# define MAX_AMOUNT 25;


int main (void){
    cout<< "\n Welcome To Baseball Ticket! This will help you get a ticket"
    << endl;
    void printTicket();
    int j =0;
    Ticket onSale;
    Ticket* p;
    Ticket first ( 101,'A',2,true,120);
    Ticket tixamount[25] = {
        { 101,'D', 4, true, 200 },
        {200, 'C', 7, false, 50},
        {303, 'E', 12, true, 100},
        {111, 'D', 22, false , 75},
        {101, 'E', 23, true , 123},
        {121, 'J', 8, false , 123},
        {111, 'K', 2, true , 175},
        {541, 'S', 6, true , 145},
        {111, 'D', 6, false , 155},
        {151, 'G', 2, true , 182},
        {121, 'H', 6, true , 223},
        {121, 'R', 3, false , 103},
        {321, 'W', 6, true , 122},
        {541, 'Q', 12, true , 203},
        {211, 'T', 2, true , 117},
        { 101,'D', 3, true, 200 },
        {200, 'C', 8, false, 50},
        {303, 'E', 2, true, 100},
        {111, 'D', 3, false , 75},
        {101, 'E', 2, true , 123},
        {541, 'S', 1, true , 145},
        {111, 'D', 2, false , 155},
        {151, 'G', 6, true , 182},
        {121, 'H', 3, true , 223},
        {121, 'R', 2, false , 103},
    
    };
    
    
    int n = 27;
    tixamount[n++] = first;
    printsaleTicket(tixamount, n/*, onSale*/);
    
//-------------------------
    
    for(int i=0; i<25; ++i ){
    tixamount[j].menu();
        j++;}
    
    cout << fixed << setprecision(2)<< "" << first.isAvailable()
        <<first.getPrice() <<"\n";
    p = &first;

    
    cout<<first.getPrice()<< "Avaiable:" <<p->isAvailable()<<endl;
    p->read();
    p->sellTicket(p->isAvailable());
    
    p = &tixamount[n];
    p->printTicket();
    
    
    printsaleTicket(tixamount,3/*, *p*/);
    
    p->sellTicket(p->isAvailable());
    
    p = &tixamount[n-3];
    p-> sellTicket(p->isAvailable());
    
    printsaleTicket(tixamount, 5/*, onSale*/);
    



}


void printsaleTicket (Ticket tixamount[] , int n/*, Ticket& onSale*/){
    for (int k=0; k < n; ++k){
        if (tixamount[k].isAvailable()) {
            cout << "On sale: " << tixamount[k].getPrice() << endl;
        
        } else { cout << "Ticket unavailable..." << endl; }
        //if (onSale.isAvailable(tixamount[k] )) cout<< "On sale:" ;
        //else
        //cout<<"";
        //tixamount[k].printTicket();
    }
    //cout << endl;
}

