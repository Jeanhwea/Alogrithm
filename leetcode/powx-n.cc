class Solution {
public:
    double myPow(double x, int n) {
        if (n<0) return 1.0/power(x,n);
        return power(x,n);
    }
    
    
private:
    // 采用分治法
    double power(double x, int n) {
        if (0==n) return 1.0;
        double val = power(x, n/2);
        return (n%2==0)? val*val: val*val*x;
    }
}; 
