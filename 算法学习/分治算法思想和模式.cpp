/*
分治算法的基本思想

将一个规模为n的问题分解为k个规模较小的子问题，这些子问题＃互相独立＃ 且 ＃与原问题相同＃ ，然后＃递归＃求解这些子问题，最后将子问题的解＃合并＃得到原问题的解。

分治法最好使子问题的规模大致相同，用分治法设计出的程序一般是递归算法。
*/


//一般的算法设计模式：
divide-and-conquer(P){
	if(|P| <= n0) adhoc(P); // 基本子算法
	divide P into smaller subinstances P1,P2,...Pk;
	if(i=1;i<=k;++i){
		yi = divide-and-conquer(Pi);
	}
	return merge(y1,y2,...yi);
}