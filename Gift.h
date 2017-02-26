#ifndef GIFT_HPP
#define GIFT_HPP
#include <iostream>
#include <algorithm>
#include "Couples.h"
#include "Happy.h"

class Gift				/*! \brief GIFT CLASS
 						 *         Contains the attributes of all the GIFTS.
 						 *
						 *  Attributes like: Gift Name, Price, Value, Luxury, Difficulty To Get, Utility Value, and Utility Class.
 						 */
{
	public:
		int item;			//!< Gift Name
		int price;			//!< Gift Price
		int value;			//!< Gift Value
		int luxury;			//!< Luxury
		int diffToGet;		//!< Difficulty To Get
		int utilityVal;		//!< Utility Value
		int utilityClass;	//!< Utility Class
		void makeBasket(Couples r[], int *c, Gift gt[], Happy hp);		//!< Making a gift basket according to the couple
};
#endif
