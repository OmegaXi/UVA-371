#include<iostream>

using namespace std;

int t;

int func(int x)
{
t=1;
	while(x!=1)
	{
		if(x%2==0)
			x=x/2;
		else x=3*x+1;
		t++;
	}
	return t;
}

main()
{
	int m,n,begin,end;
		while((cin>>m>>n)&&m)
		{
			if(m>n)
			{
				begin=n;
				end=m;
			}
			else
			{
				begin=m;
				end=n;
			}
			int max=-1;
			int seq;
			for(int i=begin;i<=end;i++)
			{
				if(max<func(i))
				{max=func(i);seq=i;}
			}
			cout<<"Between "<<m<<" and "<<n<<", "<<seq<<" generates the longest sequence of "<<max-1<<" values."<<endl;
		}
}
