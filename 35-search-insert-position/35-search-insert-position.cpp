class Solution {
public:    
    int searchInsert(vector<int>& A, int x) {
        int left = 0;
        int right = A.size()-1;
        int mid = 0;
        while( left <= right ){
            mid  = left + (right -left )/2;
                if(A[mid] == x ){
                    return mid;
                }
            else if(A[mid] > x) 
                right = mid-1;
            else 
                left = mid+1;
        }
        
        return left ;
    }
};