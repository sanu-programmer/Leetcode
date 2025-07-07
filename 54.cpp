#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
        
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        int top = 0, bottom = row - 1, left = 0, right = col - 1;
        
        while (left <= right && top <= bottom) {
            // Traverse from left to right along the topmost row
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; // Move the top boundary down
            
            // Traverse from top to bottom along the rightmost column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left
            
            if (top <= bottom) {
                // Traverse from right to left along the bottommost row
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--; // Move the bottom boundary up
            }
            
            if (left <= right) {
                // Traverse from bottom to top along the leftmost column
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }
        
        return ans;
    }