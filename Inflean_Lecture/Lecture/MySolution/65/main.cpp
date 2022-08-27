#include <iostream>

using namespace std;

int miro[9][9];

int cnt;
void re(int row, int cul){
	
	if(row==7 && cul==7){
		cnt++;
		return;
	}
	
	else{

		miro[row][cul] = 2;
		
		
		if(row>=1 && row<=7
		&& cul-1>=1 && cul-1<=7
		&& miro[row][cul-1] == 0)
		{
			re(row,cul-1);//¿Þ 	
			miro[row][cul-1] =0;
		}	
		
		
		if(row>=1 && row<=7
		&& cul+1>=1 && cul+1<=7
		&& miro[row][cul+1] == 0)
		{		
			re(row,cul+1);//¿À 			
			miro[row][cul+1] =0;
		}
		

		if(row-1>=1 && row-1<=7
		&& cul>=1 && cul<=7
		&& miro[row-1][cul] == 0)
		{
			re(row-1,cul);//À§	
			miro[row-1][cul] =0;
		}
		

		if(row+1>=1 && row+1<=7
		&& cul>=1 && cul<=7
		&& miro[row+1][cul] == 0)
		{
			re(row+1,cul);//¾Æ·¡ 
			miro[row+1][cul] =0;		 			 	
		}				
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

