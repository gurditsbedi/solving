/*
Triangle, pentagonal, and hexagonal numbers are generated by the following formulae:
Triangle 	  	Tn=n(n+1)/2 	  	1, 3, 6, 10, 15, ...
Pentagonal 	  	Pn=n(3n−1)/2 	  	1, 5, 12, 22, 35, ...
Hexagonal 	  	Hn=n(2n−1) 	  	1, 6, 15, 28, 45, ...

It can be verified that T285 = P165 = H143 = 40755.

Find the next triangle number that is also pentagonal and hexagonal.
*/
#include<stdio.h>
int main()
{
	double i=1,j=1,k=144;
	int flag;
	double tri=0,pen=0,hex=0;
	while(1)
	{
		flag=0;
		hex=k*(2*k-1);
		j=1;
		i=1;
		while(1)
		{	
			tri=i*(i+1)/2;
			if(tri==hex)
			{
				flag++;
				break;
			}
			else if(tri>hex)
			{
				break;
			}
			i++;
		}
		while(1)
		{	
			pen=j*(3*j-1)/2;
			if(pen==hex)
			{
				flag++;
				break;
			}
			else if(pen>hex)
			{
				break;
			}
			j++;
		}
		printf("\ni=%.0lf\tj=%.0lf\tk=%.0lf\tflag=%d\ttri=%.0lf\tpen=%.0lf\thex=%.0lf",i,j,k,flag,tri,pen,hex);
		if(flag==2)
		{
			printf("\nAnswer\ni=%.0lf\tj=%.0lf\tk=%.0lf\tnumber=%.0lf\n",i,j,k,tri);
			break;
		}
		k++;
	}
	return 0;
}
