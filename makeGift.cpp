#include <bits/stdc++.h>
#include "makeGift.h"

		void makeGift::makeGifts()	
		{
			srand(time(NULL));
			Couples r[100];
			Boy b[100];
			Girl g[50];
			Gift N;
			Happy H;
			Gift X[100];
			string tmp1, tmp2;
			int i, c;
			freopen("gifts.txt", "w", stdout);
			for( i = 1; i <= 100; i++)
			{
				X[i].item = i;
				X[i].price = rand()%1000 + 1;
				X[i].value = rand()%10 + 1;
				X[i].luxury = rand()%2;
				X[i].diffToGet = rand()%10 + 1;
				X[i].utilityVal = rand()%10 + 1;
				X[i].utilityClass = rand()%3 + 1;
				cout << X[i].item << " " << X[i].price << " " << X[i].value << " " << X[i].luxury << " " << X[i].diffToGet << " " << X[i].utilityVal << " " << X[i].utilityClass << endl;
			}
			freopen("output.txt", "r", stdin);
			cin >> c;
			for( i = 1; i <= c; i++ ) 
			{
				cin >> tmp1 >> r[i].b.name >> r[i].b.attRate >> r[i].b.budget >> r[i].b.intLevel >> r[i].b.minAttReq >> r[i].bType >> tmp2 >> r[i].g.name >> r[i].g.attRate >> r[i].g.maintBudget >> r[i].g.intLevel >> r[i].g.preference >> r[i].gType;
			}
			N.makeBasket(r, &c, X, H);
		}

