#include <iostream>
#include "Comm.h"

		void Comm::pair(Boy b[], Girl g[], Couples r[], int *c, int noOfBoys, int noOfGirls, Couples P)			//!< Pairing up Girls with suitable Boys
		{
			int m, q, i, j, k;
			for (i = 1; i <= noOfGirls; i++)
			{
				m = 0;
				q = 0;
				if(g[i].commitment == false)
				{
						if(g[i].preference == 1)
						{
							m = 0;
							q = 0;
							for (j = 1; j <= noOfBoys; j++)
							{
								if (b[j].commitment == false && b[j].budget >= g[i].maintBudget && g[i].attRate >= b[j].minAttReq && b[j].attRate > m)
								{
									m = b[j].attRate;
									q = j;
								}
							}
							if (q > 0)
							{
								b[q].commitment = true;
								g[i].commitment = true;
								r[(*c)++].commit(b[q], g[i]);
							}		
						}
						else
						{
							if(g[i].preference == 2)
							{
								m = 0;
								q = 0;
								for (j = 1; j <= noOfBoys; j++)
								{
									if (b[j].commitment == false && b[j].budget >= g[i].maintBudget && g[i].attRate >= b[j].minAttReq && b[j].budget > m)
									{
										m = b[j].budget;
										q = j;
									}
								}	
								if (q > 0)
								{
									b[q].commitment = true;
									g[i].commitment = true;
									r[(*c)++].commit(b[q], g[i]);
								}
							}	
							else
							{
								if(g[i].preference == 3)
								{
									m = 0;
									q = 0;
									for (j = 1; j <= noOfBoys; j++)
									{
										if (b[j].commitment == false && b[j].budget >= g[i].maintBudget && g[i].attRate >= b[j].minAttReq && b[j].intLevel > m)
										{
											m = b[j].intLevel;
											q = j;
										}
									}
									if (q > 0)
									{
										b[q].commitment = true;
										g[i].commitment = true;
										r[(*c)++].commit(b[q], g[i]);
									}
								}		
							}
						}
				}
			}
			P.print(r, *c);
		}
