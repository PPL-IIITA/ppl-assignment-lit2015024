#ifndef COUPLES_HPP
#define COUPLES_HPP
#include "Boy.h"
#include "Girl.h"
#include <stdlib.h> 

using namespace std;

class Couples			/*! \brief COUPLES CLASS
 						 *         Contains the attributes of all the COUPLES.
 						 *
						 * Attributes like: Girl Type, Boy Type, Happiness of Couple, and Compatibility of Couple.
 						 */
{
public:
	Boy b;						
	Girl g;
	int bType; 			//!< 1 - choosy, 2 - normal, 3 - desperate
	int gType; 			//!< 1 - miser, 2 - generous, 3 - geek
	double chappy;		//!< Happiness of Couple
	double comp;		//!< Compatibility of Couple
	void commit(Boy p, Girl q);		//!< Committing a Boy and a Girl
	void print(Couples r[],int c);			//!< Printing couples formed.
	
public:
	Couples()			//!< Constructor
	{
		chappy = 0.0;
		comp = 0.0;
	}
};
#endif
