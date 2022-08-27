#include <iostream>

using namespace std;

int miro[9][9];

//************* 상우하좌 표현 ***************
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int cnt;
void re(int row, int cul){
	
	if(row==7 && cul==7){
		cnt++;
		return;
	}
	
	else{
		miro[row][cul]=2;
		
		for(int i=0; i<4; i++){
			if( row+dx[i]>=1 && cul+dy[i]>=1
			&& row+dx[i]<=7 && cul+dy[i]<=7 
			&& miro[row+dx[i]][cul+dy[i]]==0 ){
				miro[row+dx[i]][cul+dy[i]]=2;
				re(row+dx[i], cul+dy[i]);
				miro[row+dx[i]][cul+dy[i]]=0;
			}
		} 


//		miro[row][cul] = 2;		
//		
//		if(row>=1 && row<=7
//		&& cul-1>=1 && cul-1<=7
//		&& miro[row][cul-1] == 0)
//		{
//			re(row,cul-1);//왼 	
//			miro[row][cul-1] =0;
//		}	
//		
//		
//		if(row>=1 && row<=7
//		&& cul+1>=1 && cul+1<=7
//		&& miro[row][cul+1] == 0)
//		{		
//			re(row,cul+1);//오 			
//			miro[row][cul+1] =0;
//		}
//		
//
//		if(row-1>=1 && row-1<=7
//		&& cul>=1 && cul<=7
//		&& miro[row-1][cul] == 0)
//		{
//			re(row-1,cul);//위	
//			miro[row-1][cul] =0;
//		}
//		
//
//		if(row+1>=1 && row+1<=7
//		&& cul>=1 && cul<=7
//		&& miro[row+1][cul] == 0)
//		{
//			re(row+1,cul);//아래 
//			miro[row+1][cul] =0;		 			 	
//		}				
	}	
}

int main() {	
	
	// input
	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++)
			scanf("%d",&miro[i][j]);
	}
	
	// dfs
	re(1,1);
	printf("%d",cnt);
	

	return 0;
}

