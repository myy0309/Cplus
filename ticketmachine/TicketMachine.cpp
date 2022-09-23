/*
 * TicketMachine.cpp
 *
 *  Created on: 2022年9月19日
 *      Author: moyuyue
 */

#include "TicketMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine() {
	total = 0;
	balance = 0;

}
TicketMachine::TicketMachine(int total, int balance){
	this->total = total;
	this->balance = balance;
}

TicketMachine::~TicketMachine() {
}

void TicketMachine::showPrompt() {
	 cout << "prompt";
}

void TicketMachine::insertMoney(int money){
	balance += money;
}
void TicketMachine::showBalance(){
	cout << balance << endl;
}
