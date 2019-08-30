#include <iostream>
using namespace std;
int final_mat[4][4];

int main()
{
	for(int i = 0 ; i < 4 ; i++)
		for(int j=0 ; j <4 ; j++)
			final_mat[i][j] = 0;
	int val;
	for(int mat = 0 ; mat < 10 ; mat++)
		for( int i = 0 ; i<4 ; i++)
			for( int j = 0 ; j < 4 ; j++)
				{cin >> val; final_mat[i][j] += val;}

	for(int i = 0 ; i < 4 ; i++)
		{
			for(int j=0 ; j <4 ; j++)
			cout << final_mat[i][j]/10 << " ";
			cout <<endl;
		}
							
return 0;

}
