class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int sum = m+n;
        double ret;

        if (sum % 2) {
            ret = find_kth(nums1.begin(), m, nums2.begin(), n, sum/2+1);
        } else {
            double a = find_kth(nums1.begin(), m, nums2.begin(), n, sum/2);
            double b = find_kth(nums1.begin(), m, nums2.begin(), n, sum/2+1);
            ret = (a+b) / 2;
        }

        return ret;
    }

    // find_kth 查找第k个小的数
    static double find_kth(vector<int>::const_iterator A, int m, vector<int>::const_iterator B, int n, int k) {
        if (m > n) return find_kth(B, n, A, m, k);
        if (m == 0) return B[k-1];
        if (k == 1) return min(*A, *B);

        int i = min(m, k/2), j = k-i;
        if (A[i-1] < B[j-1]) {
            return find_kth(A+i, m-i, B, n, k-i);
        } else if (A[i-1] > B[j-1]) {
            return find_kth(A, m, B+j, n-j, k-j);
        } else return A[i-1];
    }
};
