class Solution {
public:
    int kthGrammar(int n, int k) {
        int c = 0;
        while(k > 1)
        {
            if(k%2==0)
            c= !c;
            k = ceil(k/2.0);
        }
        if(c==0)
        return 0;
        else 
        return 1;
    }
};