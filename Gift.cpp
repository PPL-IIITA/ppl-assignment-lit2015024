#include <bits/stdc++.h>
#include "Gift.h"

	void Gift::makeBasket(Couples r[], int *c, Gift gt[], Happy hp)	
	{
		freopen("presents.txt", "w", stdout);
		int p, l = 0, j, cost = 0, n = 1, m, s, i = 1, p1;
		for (i = 1; i <= *c; i++)
		{
			if(r[i].bType == 1)
			{
				p = r[i].g.maintBudget;
				l = gt[n].price;
				for (j = 1; j <= 100; j++)
				{
					if (l > gt[j].price)
					{
						l = gt[j].price;		//lowest price
						n = j;
					}
				}
				if (l > r[i].b.budget)
				{
					r[i].b.budget = l;
				}
				cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
				cost = cost + l;
				cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
				s = gt[1].price;
				m = s;
				for (j = 1; j <= 100; j++)
				{
					if (s < gt[j].price)
					{
						s = gt[j].price;		//maximum price
						m = s;   	
					}
				}
				while(cost < p)
				{
					n = 0;
					for (j = 1; j <= 100; j++)
					{
						if (s > gt[j].price && gt[j].price > l)
						{
							s = gt[j].price;			//kth lowest price
							n = j;
						}
					}
					if (n == 0)
						break;
					if (n != 0)
					{
						cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
						cost = cost + s;
						cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
						l = s;
						s = m;
					}
				}
				cost = 0;
			}
			else	
			{
				if(r[i].bType == 2)
				{
					p = r[i].b.budget;
					l = gt[n].price;
					for (j = 1; j <= 100; j++)
					{
						if (l > gt[j].price)
						{
							l = gt[j].price;		//lowest price
							n = j;
						}
					}
					if (l > r[i].b.budget)
					{
						r[i].b.budget = l;
					}
					cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
					cost = cost + l;
					cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
					s = gt[1].price;
					m = s;
					for(j = 1; j <= 100; j++)
					{
						if (s < gt[j].price)
						{
							s = gt[j].price;		//maximum price
							m = s;   	
						}
					}
					while(cost < p)
					{
						n = 0;
						for (j = 1; j <= 100; j++)
						{
							if (s > gt[j].price && gt[j].price > l)
							{
								s = gt[j].price;			//kth lowest price
								n = j;
							}
						}
						if (n == 0)
							break;
						if (n != 0)
						{
							cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
							cost = cost + s;
							cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
							l = s;
							s = m;
						}
					}
					cost = 0;
				}
				else
				{
					if(r[i].bType == 3)
					{
						p = r[i].g.maintBudget;
						p1 = r[i].b.budget;
						for (j = 1; j <= 100; j++)
						{
							l = gt[n].price;
							if (l > gt[j].price)
							{
								l = gt[j].price;		//lowest price
								n = j;
							}
						}
						if (l > r[i].b.budget)
						{
							r[i].b.budget = l;
						}
						cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
						cost = cost + l;
						cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
						for (j = 1; j <= 100; j++)
						{
							s = gt[n].price;
							if (s < gt[j].price)
							{
								s = gt[j].price;		//maximum price
							}
							m = s;
						}
						while(cost < p)
						{
							n = 0;
							for (j = 1; j <= 100; j++)
							{
								if (s > gt[j].price && gt[j].price > l)
								{
									s = gt[j].price;		//second lowest price
									n = j;
								}
							}
							if (n == 0)
								break;
							if (n != 0)
							{
								cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
								cost = cost + l;
								cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;
								l = s;
								s = m;
							}
						}
						if((p1 - cost) > 0)
						{
							for (j = 1; j <= 100; j++)
							{
								if(gt[j].luxury == 1 && gt[j].price <= (p1 - cost) && s < gt[j].price)
								{
									s = gt[j].price;		//maximum priced luxury gift in his budget
								}
							}
							cout << "Boy " << r[i].b.name << " " << "gifted item " << gt[n].item << " " << "to Girl " << r[i].g.name << " " << endl;
							cost = cost + s;
							cout << cost << " " << gt[n].price << " " << gt[n].luxury << " " << gt[n].value << endl;	
						}
						cost = 0;
					}
				}
			}
		}
		cout << "0 0 0 0 0 0 0 0" << endl;	
		hp.Happiness(r, *c);
	}

