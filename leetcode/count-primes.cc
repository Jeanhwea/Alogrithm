class Solution {
public:
    int countPrimes(int n) {
        int i, j, cnt;
        bool * isPrime;
        isPrime = new bool[n];

        memset(isPrime, true, n*sizeof(bool));

        for (i = 2; i < n; i++) 
            if (isPrime[i])
                for (j = i+i; j < n; j += i)
                    isPrime[j] = false;


        cnt = 0;
        for (i = 2; i < n; i++)
            if (isPrime[i])
                cnt++;

        delete[] isPrime;
        return cnt;
    }
};
