/*
 * main.cpp
 *
 *  Created on: 2022年9月19日
 *      Author: moyuyue
 */

#include "ticketmachine.h"

int main(){
	TicketMachine tm;
	TicketMachine tm1(100,100);

	tm.showBalance();
	tm1.showBalance();

	return 0;
}
