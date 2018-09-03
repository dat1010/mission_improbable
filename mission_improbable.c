#include <stdio.h>


int canRemove(int height)
{
	return 1;
}


int main()
{	
// First way we can do this.
// We need to hold the left and front view in separate arrays
// each item in that array will have the tallest hight
// we already have the bottom view if there is only one box there skip that 
// item and move on
				
  int boxes[5][5] = {{1,4,0,5,2},
									   {2,1,2,0,1},
									   {0,2,3,4,4},
									   {0,3,0,3,1},
									   {1,2,2,1,1}};


	int count = 0;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
				if(boxes[i][j] <= 1)
				{
					continue;
				}
		}
	}


   return 0;
}

