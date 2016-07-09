int sum(int n){
	int res = 0;
	int src = 1+n;

	res = (1+n)*n/2 + n%2*(n+1)/2;
	return res;
}
