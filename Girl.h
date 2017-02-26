#include <iostream>

class Girl				/*! \brief GIRL CLASS
 						 *         Contains the attributes of all the GIRLS.
 						 *
						 *  Attributes like: Name, Attraction Rate, Maintenence Budget, Intelligence Level, Preference, and Commitment.
 						 */
{
public:
	int name;			//!< Name of the GIRL.						
	int attRate;		//!< Attraction Rate of the GIRL.
	int maintBudget;	//!< MAintenence Budget of the GIRL.
	int intLevel;		//!< Intelligence of the GIRL.
	int preference;		//!< Preference of the GIRL : 1 - MOST ATTRACTIVE, 2 - RICHEST, 3 - MOST INTELLIGENT
	bool commitment;	//!< Commitment of the GIRL.		
	
public:
	Girl()				//!< Constructor
	{
		commitment = false;
	}
};
