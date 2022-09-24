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
	inline int insertMoney(int cash){
		return money += cash;
	};
};

#endif /* VENDER_H_ */
