/*
 * TicketMachine.h
 *
 *  Created on: 2022年9月19日
 *      Author: moyuyue
 */

#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine {
public:
	TicketMachine();
	TicketMachine(int total, int balance);
	~TicketMachine();

	void showPrompt();
	void insertMoney(int money);
	void showBalance();
	void showTotal();
	void printTicket();
private:
	int balance;
	int total;

};

#endif /* TICKETMACHINE_H_ */
