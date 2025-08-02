class Solution {
public:
bool SearchInRow(vector<vector<int>> &mat, int target, int row){
    // appy binary search in particular row 
    int n  = mat[0].size();
    int start =0, end = n-1;
    while(start <= end){
        int mid = start+ (end- start)/2;
        if(target == mat[row][mid])
        return true;
        else if(target<mat[row][mid])
        end = mid -1;
        else
        start = mid+1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& mat, int target) {

       int m = mat.size(); int n = mat[0].size();
       int startRow = 0, endRow = m-1;
     // find row where is element present 
     while(startRow<= endRow){
        int midRow = startRow +(endRow- startRow)/2;
        // find row
        
        if(target>= mat[midRow][0] && target<=mat[midRow][n-1]){
            return SearchInRow(mat,target, midRow);

        }

        else if(target <mat[midRow][0])
        endRow = midRow -1;
        else{
            startRow = midRow+1;
        }
     }
     

     return false;   
    }
};