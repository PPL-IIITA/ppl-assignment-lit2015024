#include <bits/stdc++.h>
#include "Happy.h"

		void Happy::Happiness(Couples r[], int c)		
		{
			int k, a, b, p, q, i, j, l, m, n, s;
			double gh = 0.0, bh = 0.0;
			Couples pr;
			string tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
			int girl;
			freopen("happiness.txt", "w", stdout);
			freopen("presents.txt", "r", stdin);
			k = rand()%c + 1;
			cin >> tmp1 >> pr.b.name >> tmp2 >> tmp3 >> tmp4 >> tmp5 >> tmp6 >> pr.g.name;
			for (i = 1; i <= c; i++)
			{
				while(1)
				{
					girl = r[i].g.name;
					if(r[i].gType == 1)
					{		
						cin >> a >> b >> p >> q;
						if (p == 1)
						{
							gh = gh + b + (2*q);
						}
						else
							gh = gh + b + q;
						bh = a;
						cin >> tmp1 >> pr.b.name >> tmp2 >> tmp3 >> tmp4 >> tmp5 >> tmp6 >> pr.g.name;
						if (pr.g.name == 0)
							break;
						if (girl != pr.g.name)
						{
							girl = pr.g.name;
							break;	
						}
					}
					else
					{
						if(r[i].gType == 2)
						{
							cin >> a >> b >> p >> q;
							gh = gh + b + q;
							bh = a;
							cin >> tmp1 >> pr.b.name >> tmp2 >> tmp3 >> tmp4 >> tmp5 >> tmp6 >> pr.g.name;
							if (pr.g.name == 0)
								break;
							if (girl != pr.g.name)
							{
								girl = pr.g.name;
								break;
							}
						}
						else
						{
							if(r[i].gType == 3)
							{
								cin >> a >> b >> p >> q;
								gh = gh + b;
								bh = a;
								cin >> tmp1 >> pr.b.name >> tmp2 >> tmp3 >> tmp4 >> tmp5 >> tmp6 >> pr.g.name;
								if (pr.g.name == 0)
									break;
								if (girl != pr.g.name)
								{
									girl = pr.g.name;
									break;
								}
							}
						}
					}	
				}
				if(r[i].gType == 1)
				{
					gh = gh/r[i].g.maintBudget;
					gh = log(gh);
					if(r[i].bType == 1)
					{
						bh = (r[i].b.budget - bh)/r[i].b.budget;
					}
					else
					{
						if(r[i].bType == 2)
						{
							bh = gh;
						}
						else
						{
							if(r[i].bType == 3)
							{
								bh = r[i].g.intLevel;
							}
						}
					}
					r[i].chappy = bh + gh;
					r[i].comp = abs(r[i].b.budget - r[i].g.maintBudget) + abs(r[i].b.attRate - r[i].g.attRate) + abs(r[i].b.intLevel - r[i].g.intLevel);
				}
				else
				{
					if(r[i].gType == 2)
					{
						gh = gh/r[i].g.maintBudget;
						if(r[i].bType == 1)
						{
							bh = (r[i].b.budget - bh)/r[i].b.budget;
						}
						else
						{
							if(r[i].bType == 2)
							{
								bh = gh;
							}
							else
							{
								if(r[i].bType == 3)
									{
									bh = r[i].g.intLevel;
								}
							}
						}
						r[i].chappy = bh + gh;
						r[i].comp = abs(r[i].b.budget - r[i].g.maintBudget) + abs(r[i].b.attRate - r[i].g.attRate) + abs(r[i].b.intLevel - r[i].g.intLevel);
					}
					else
					{
						if(r[i].gType == 3)
						{
							gh = gh/r[i].g.maintBudget;
							gh = exp(gh);
							if(r[i].bType == 1)
							{
								bh = (r[i].b.budget - bh)/r[i].b.budget;
							}
							else
							{
								if(r[i].bType == 2)
								{
									bh = gh;
								}
								else
								{
									if(r[i].bType == 3)
									{
										bh = r[i].g.intLevel;
									}
								}		
							}
							r[i].chappy = bh + gh;
							r[i].comp = abs(r[i].b.budget - r[i].g.maintBudget) + abs(r[i].b.attRate - r[i].g.attRate) + abs(r[i].b.intLevel - r[i].g.intLevel);
						}
					}
				}
			gh = 0;
			}
			m = 0;
			cout << k << endl; 
			l = r[1].chappy;
			cout << "\nMost Happy:" << endl;
			for (i = 1; i <= c; i++)
			{
				if (l > r[i].chappy)
				{
					l = r[i].chappy;		//least happy
					p = l;
				}
			}
			for (i = 1; i <= c; i++)
			{
				if (m < r[i].chappy)
				{
					m = r[i].chappy;		//most happy
					j = i;
				}
			}
			cout << "Boy " << r[j].b.name << " " << "Girl " << r[j].g.name << " " << m << endl;
			for (i = 1; i < k; i++)
			{
				n = 0;
				for(j = 1; j <= c; j++)
				{
					if(r[j].chappy > l && r[j].chappy < m)
					{
						l = r[j].chappy;
						n = j;
					}
				}
				if(n != 0)
				{
					cout << "Boy " << r[n].b.name << " " << "Girl " << r[n].g.name << " " << l << endl;
					m = l;
					l = p;
				}
			}
			m = 0;
			l = r[1].comp;
			cout << "\nMost Compatible:" << endl;
			for (i = 1; i <= c; i++)
			{
				if (l > r[i].comp)
				{
					l = r[i].comp;		//least compatible
					p = l;
				}
			}
			for (i = 1; i <= c; i++)
			{
				if (m < r[i].comp)
				{
					m = r[i].comp;		//most compatible
					j = i;
				}
			}
			cout << "Boy " << r[j].b.name << " " << "Girl " << r[j].g.name << " " << m << endl;
			for (i = 1; i < k; i++)
			{
				n = 0;
				for(j = 1; j < c; j++)
				{
					if(r[j].comp > l && r[j].comp < m)
					{
						l = r[j].comp;
						n = j;
					}
				}
				if(n != 0)
				{
					cout << "Boy " << r[n].b.name << " " << "Girl " << r[n].g.name << " " << l << endl;
					m = l;
					l = p;
				}
			}
		}

