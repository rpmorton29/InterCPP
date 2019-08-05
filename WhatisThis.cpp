/*
 ================================================================================
 * KEY for Project 2 WhatIsThis.cpp
 * Author: RMorton
 * Version: Created on Oct 4, 2017, updates 10/9/17
 * Copyright: By Ryan Morton for use as an assignment
 * Description: This Program will read a file and determine what language it is
 * written in by comparing the letter frequency of Itailian and english.
 . Written in C++, Ansi-style.
 ================================================================================
 */
#include <iostream>
#include <Fstream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <cmath>

# define INF "WhatIsThis.txt"
# define OUTF "OutFile.txt"
using namespace std;

int main() {
    char k;
    int count = 0;
    char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
        'p','q','r','s','t','u','v','w','x','y','z'};
    double arr[26]={0};
    double perc[26]= {};
    
    double engl[26] = {8.167,1.492,2.782,4.253,12.702,2.228,2.015,6.094,6.966,
        0.153,0.772,4.025,2.406,6.749,7.507,1.929,0.095,5.987,6.327,9.056,2.758,
        0.978,2.360,0.150,1.974,0.074};
    
    double ital[26]={11.745,0.927,4.501,3.736,11.792,1.153,1.644,0.636,10.143,
        0.011,0.009,6.510,2.512,6.883,9.832,3.056,0.505,6.367,4.981,5.623,3.011,
        2.097,0.033,0.003,0.020,1.181};
        
    
    
    ifstream dataFile (INF);
    ofstream outFile (OUTF);
    
    if(!dataFile){
        cerr << "Can't Open"<<INF<<"For input";
    }
    if(!outFile){
        cerr << "Can't Open"<<OUTF<<"For input";
    }
   outFile << "Welcome To What is this BY Ryan Morton\n";
    
    while (dataFile>>k) {     //file reader
        if (isalpha(k)) {
            k = tolower(k);
            arr[k-97]++;
            count++;
        }
        
    }
    
    
    outFile << "Letter " << " Ipt Occurance " << " Ipt Freq " <<
    "  Eng Freq  " << " Itl Freq"<< endl;
    
    for (int i = 0; i<=25; i++) {
        
        perc[i] = 100*arr[i] / count ;
        outFile<<alph[i] << setw(12) << arr[i]<<setw(17)<<perc[i]<<"%"<<
        setw(10) << engl[i]<< "%" << setw(10) << ital[i] << "%"<< endl;
    }
    
    outFile << "Launguage from most similar to least similar:\n";
    
    double errEN,errIT=0;
    for (int i = 0; i<=25; i++) {
        errEN = errEN + abs(perc[i]-engl[i]);
        errIT = errIT + abs(perc[i]-ital[i]);
    }
    
    
    
    if(errEN < errIT)
    {
        outFile << "1. English " << errEN << "%\n2. Italian "
        << errIT << "%";

    }
    else if(errEN > errIT){
        outFile << "1. Italian " << errEN << "%\n2. English "
        << errIT << "%";
    }
    
        return 0;
        }
