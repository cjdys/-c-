//用clock()函数统计for循环的运行时间
#include<bits/stdc++.h>
using namespace std;
int main(){

	int i,k,n=1e8;
	clcok_t start,end;
	start = clock();
	for(i=0;i<n;i++) k++;
	end = clock;
	cout<<(double)(end - start)/CLOCKS_PER_SEC<<endl;
}
