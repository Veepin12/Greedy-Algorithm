#include <iostream>
using namespace std;

class solution {
public:
    int knapsack(int W, int wt[], int val[], int n) {
        if (n == 0 || W == 0) {
            return 0;
        }
        if (wt[n - 1] > W) {
            return knapsack(W, wt, val, n - 1);
        } else {
            return max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
                       knapsack(W, wt, val, n - 1));
        }
    }
};
int  main(){
    class solution S;
    int wt[]={65,98,23,59,25};
    int val[]={100,200,50,150,75};int W=127;
    int n=sizeof(wt)/sizeof(wt[0]);
    cout<<S.knapsack(W,wt,val,n);
    return 0;
}
