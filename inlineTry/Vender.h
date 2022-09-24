/*
 * Vender.h
 *
 *  Created on: 2022年9月24日
 *      Author: moyuyue
 */

#ifndef VENDER_H_
#define VENDER_H_

class Vender {
private:
	int money;
public:
	Vender();
	virtual ~Vender();
	int insertMoney(int cash);

};

inline int Vender::insertMoney(int cash){ //keyword 'inline' cannot be omitted
		return money += cash;
	};

#endif /* VENDER_H_ */
