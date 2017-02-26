#include <stdlib.h> 
#include "Couples.h"

using namespace std;

void Couples::commit(Boy p, Girl q)	
{
	b = p;
	g = q;
}

void Couples::print(Couples r[],int c)			//!< Printing couples formed.
{
	int i;
	freopen("output.txt", "w", stdout);
	cout << c << endl;
	for( i = 0; i < c; i++) 
	{
		r[i].bType = (rand()%3)+1;
		r[i].gType = (rand()%3)+1;
		cout << "Boy " << r[i].b.name << " " << r[i].b.attRate << " " << r[i].b.budget << " " << r[i].b.intLevel << " " << r[i].b.minAttReq << " " << r[i].bType << " " << "Girl " << r[i].g.name << " " << r[i].g.attRate << " " << r[i].g.maintBudget << " " << r[i].g.intLevel << " " << r[i].g.preference << " " << r[i].gType << endl;
	}
}

