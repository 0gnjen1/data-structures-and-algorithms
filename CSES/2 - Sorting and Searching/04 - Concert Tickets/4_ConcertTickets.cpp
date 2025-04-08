#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n, m; cin >> n >> m;
	multiset<int> tickets;
	tickets.insert(0);
	tickets.insert(2e9);
	for(int i=0; i<n; i++){
		int price; cin >> price;
		tickets.insert(price);
	}
	for(int i=0; i<m; i++){
		int query; cin >> query;
		multiset<int>::iterator ticketpriceIter = prev(tickets.upper_bound(query), 1);
		int ticketprice = *ticketpriceIter;
		if(ticketprice) tickets.erase(ticketpriceIter);
		cout << (ticketprice ? ticketprice : ticketprice-1) << '\n';
	}

}

