class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long s = 0;
        for(int i=0;i<chalk.size();i++){
            s += chalk[i];
        }
        int r = k%s;
        for(int i=0;i<chalk.size();i++){
            if(r<chalk[i]){
                return i;
            }
            r -=chalk[i];
        }
        return -1;
    }
};