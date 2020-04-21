/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> n = binaryMatrix.dimensions();
        int x = 0 , y= n[1]-1;
        int ans =-1;
        while( y >=0 && x<n[0]){
            int z=binaryMatrix.get(x , y);
            if(z){
                ans=y;
                y--;
            }
            else x++;
        }
         
        
        return ans;
    }
};