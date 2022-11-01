#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices) {
    // logic: use dynamic programming to use a certain variable
    //to keep track of the maximum value right now

    int maxProfit = 0;
    int min = prices[0];

    for (int i=1;i<prices.size();i++){
        // reset the min value if current value is smaller than min, which
        //indicates a negative profit
        if (min > prices[i]) min = prices[i];
        else maxProfit = max(maxProfit,prices[i] - min);
        //update the max value
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
}