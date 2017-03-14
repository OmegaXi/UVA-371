#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int X( long long n )
{
	if ( n == 1LL ) return 3;
	int count = 0;
	while ( n > 1LL ) {
		if ( n&1 ) n = (n<<1LL)+n+1LL;
		else n >>= 1LL;
		count ++;
	}
	return count;
}

int main()
{
	int L,H,V,S;
	while ( scanf("%d%d",&L,&H) && L+H ) {
		if ( L > H ) swap( L, H );
		V = L;
		for ( int i = L+1 ; i <= H ; ++ i )
			if ( X( V+0LL ) < X( i+0LL ) )
				V = i;
		printf("Between %d and %d, %d generates the ",L,H,V);
		printf("longest sequence of %d values.\n",X(V+0LL));
	}
	
	return 0;
}
