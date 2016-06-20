#include <cstdio>
int PositiveIntegerDevide(int n,int m){
	if((n<1) || (m<1)) return 0;
	if((n==1)|| (m==1)) return 1;
	if(n<m) return PositiveIntegerDevide(n,n);
	if(n==m)  return PositiveIntegerDevide(n,m-1)+1;
	return PositiveIntegerDevide(n,m-1)+PositiveIntegerDevide(n-m,m);
}

int main(){
	printf("%d\n", PositiveIntegerDevide(7,7));
	return 0;
}

/*
思路：
PositiveIntegerDevide(n,m)表示n的划分的最大加数不大于m的划分个数

当n>m>1时
q(n,m) = q(n,m-1) + q(n-m,m)
分成最大加数小于m 的 q(n,m-1)和等于m的划分 q(n-m,m)之和
q(n-m,m)是因为加数中一定有m,由此缩小规模。
*/
