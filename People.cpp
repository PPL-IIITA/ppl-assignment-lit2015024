#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "People.h"

void People::getPeople()		//!< Generates a random list of Boys and Girls with all the information needed to form Couples.
{
	srand(time(NULL));
	Boy B[100];
	Girl G[100];
	Couples r[100];
	Couples P;
	Comm a;
	int c = 0;
	freopen("input.txt", "w", stdout);
	int i;
	int noOfBoys, noOfGirls;
	noOfBoys = ((rand()*rand())%100) + 1;
	noOfGirls = (rand()%noOfBoys)/2 + 1;
	for( i = 1; i <= noOfBoys; i++ ) 
	{
		B[i].name = i;
		B[i].attRate = (rand()%10) + 1;
		B[i].budget = ((rand()%10) + 1)*1000;
		B[i].intLevel = (rand()%10) + 1;
		B[i].minAttReq = (rand()%10) + 1;
		cout << B[i].name << " " << B[i].attRate << " " << B[i].budget << " " << B[i].intLevel << " " << B[i].minAttReq << endl;
	}	
	cout << "\n" << endl;
	for( i = 1; i <= noOfGirls; i++ ) 
	{
		G[i].name = i;
		G[i].attRate = (rand()%10) + 1;
		G[i].maintBudget = ((rand()%10) + 1)*400;
		G[i].intLevel = (rand()%10) + 1;
		G[i].preference = (rand()%3) + 1;
		cout << G[i].name << " " << G[i].attRate << " " << G[i].maintBudget << " " << G[i].intLevel << " " << G[i].preference << endl;
	}
	a.pair(B, G, r, &c, noOfBoys, noOfGirls, P);	
}

