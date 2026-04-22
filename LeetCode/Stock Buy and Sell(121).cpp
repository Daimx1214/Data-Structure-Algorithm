#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices){
	int maxProfit = 0;
	int bestBuy = prices[0];
	
	for(int i=0; i<prices.size(); i++){
		if(prices[i]<bestBuy){
			bestBuy = prices[i];
		}
		else{
			maxProfit = max(maxProfit, prices[i]-bestBuy);
		}
	}
	return maxProfit;
}