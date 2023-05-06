// Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is called perfect if every diagonal from top-left to bottom-right has the same elements.
#include <iostream>
#include <vector>
using namespace std;
bool check(vector<vector<int>>& matrix){
    int r = matrix.size();
    int c = matrix[0].size();
    for(int i = 1; i < r; i++){ 
        for(int j = 1; j < c; j++){
            if(matrix[i][j] != matrix[i-1][j-1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<int>> matrix={{9,8,7,6},{5,9,8,7},{1,5,9,8}} ;
    if(check(matrix)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
