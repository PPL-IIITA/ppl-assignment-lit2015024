#ifndef COMM_HPP
#define COMM_HPP
#include <iostream>
#include "Couples.h"

class Comm				/*! \brief COMM CLASS
 						 *         Makes suitable committed pairs.
 						 *
						 *  Attributes like: Name, Attraction Rate, Maintenence Budget, Intelligence Level, Preference, and Commitment.
 						 */
{
	public:
		void pair(Boy b[], Girl g[], Couples r[], int *c, int noOfBoys, int noOfGirls, Couples P);			//!< Pairing up Girls with suitable Boys
};
#endif
