#include<iostream>
#include<vector>
using namespace std;

void ratMaze(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans){
	int n = mat.size();
	if(row<0 || col<0 || row>=n || col>=n ){
		return ;
	}
	if(mat[row][col]==0 || mat[row][col]==-1){
		return;
	}
	if(row==n-1&&col==n-1){
		ans.push_back(path);
		return;
	}
	mat[row][col]= -1;  //MATRIX is visited
	ratMaze(mat,row+1,col,path+" Down ", ans); // down
	ratMaze(mat,row-1,col,path+" Up ",ans); // up
	ratMaze(mat,row,col+1,path+" Right ",ans); // right
	ratMaze(mat,row,col-1,path+" Left ",ans); // left
	
	mat[row][col]=1; //backtracking
}

vector<string> findpath(vector<vector<int>> &mat){
	int n = mat.size();
	vector<string>ans;
//	string path = "";
	ratMaze(mat, 0,0,"", ans);
	return ans;
}
 
int main(){
	vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
	vector<string>ans = findpath(mat);

	for(string path: ans){
		cout<<path<<endl;
	}
	return 0;
}