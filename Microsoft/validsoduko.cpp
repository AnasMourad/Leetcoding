class Solution {
public:
    vector<vector<char> > myBoard;
    int R;
    int C;
    bool isValidRow(int i, int j, char c){
        for(int k=0;k<C;++k){
            if( k!=j && myBoard[i][k]==c){
                cout<<"invalid row "<<c<<endl;
                return false;
            }
        }
        return true;
    }

    bool isValidCol(int i, int j, char c){
        for(int k=0;k<R;++k){
            if( k!=i && myBoard[k][j]==c){
                cout<<"invalid col "<< c<<endl;
                return false;
            }
        }
        return true;
    }

    bool isValidSubGrid(int i, int j, char c){

        int starti = i-i%3;
        int startj = j-j%3;
        for(int a=starti;a<starti+3;++a){
            for(int b=startj;b<startj+3;++b){
                if(i!=a && b!=j){
                    if(myBoard[a][b]==c){
                        cout<<"invalid sub grid"<<endl;
                        return false;
                    }
                }
            }
        }
        return true;

    }

    bool isValidSudoku(vector<vector<char>>& board) {
         myBoard = board;
         R = board.size();
         C = board[0].size();
          for(int i=0;i<board.size();++i){
              for(int j=0;j<board[0].size();++j){
                    if(board[i][j]!='.'){

                        if(!isValidRow(i, j, board[i][j]) || !isValidCol(i, j, board[i][j])||
                          !isValidSubGrid(i, j, board[i][j])){
                             return false;
                          }


                    }
              }
          }
        return true;
    }
};
