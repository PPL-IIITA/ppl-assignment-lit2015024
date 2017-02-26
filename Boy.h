#include <iostream>

class Boy				/*! \brief BOY CLASS
 						 *         Contains the attributes of all the BOYS.
 						 *
						 *  Attributes like: Name, Attraction Rate, Budget, Intelligence Level, Minimum Attraction Requirement, and Commitment.
 						 */
{
public:
	int name;			//!< Name of the BOY.						
	int attRate;		//!< Attraction Rate of the BOY.
	int budget;			//!< Budget of the BOY.
	int intLevel;		//!< Intelligence of the BOY.
	int minAttReq;		//!< Minimum Atrraction Requirement of the BOY.
	bool commitment;	//!< Commitment of the BOY.
	
public:
	Boy()				//!< Constructor
	{
		commitment = false;
	}
};
