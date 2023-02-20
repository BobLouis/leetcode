#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void print(vector<vector<char> >& board){

        for(int i=0;i<9;++i){
            for(int j=0;j<9;j++)
                cout<<board[i][j]<<" ";
            cout<<endl;
        }
    }
    bool check(vector<vector<char> >& board,int i,int j,int val){
        int row = (i/3)*3;
        int col = (j/3)*3;

        for(int a = 0;a<9;++a) {
            if(board[i][a] == val) return false;
            if(board[a][j] == val) return false;
        }

        for(int k = 0;k<3;++k) {
            for(int q = 0;q<3;++q) {
                if(board[k+row][q+col] == val)return false;
            }
        }
        return true;
    }

    bool solver(vector<vector<char> >& board,int i,int j){

        if(i == 9) return true;
        if(j == 9) return solver(board,i+1,0);
        if(board[i][j] != '.') return solver(board,i,j+1);

        for(char c = '1'; c <= '9'; ++c){
            if(check(board,i,j,c)){
                board[i][j] = c;
                if(solver(board,i,j+1)) return true;
                board[i][j] = '.';
            }
        } 
        return false;
    }

    void solveSudoku(vector<vector<char> >& board) {
        cout<<solver(board,0,0);
    }
};


int main(){
    vector<vector<char> > board { {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'} };
    Solution s;
    s.solveSudoku(board);
    return 0;
}