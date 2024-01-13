#include<stdio.h>
int main()
{
	int i,j,a[2][10]={{'h','e','l','l','o'},{'w','o','r','l','d'}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i][j]==0)                    //条件判断表达式也可以改写为“！a [i][j]” 
			      break;
			    printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
