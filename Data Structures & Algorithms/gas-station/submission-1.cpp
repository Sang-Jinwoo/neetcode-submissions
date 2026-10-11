class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost=0,totalGas =0;
        for(int i=0;i<gas.size();i++){
            totalCost+=cost[i];
            totalGas+=gas[i];
        }
        if(totalGas<totalCost)
            return -1;
        int start =gas.size();
        int end =0;
        int tank =0;
        while(start>end){
            if(tank<=0)
            {
                start--;
                tank += (gas[start]-cost[start]);
            }
            else{
                tank += (gas[end]-cost[end]);
                end++;
            }
        }
        return tank>=0?start:-1;
    }
};
