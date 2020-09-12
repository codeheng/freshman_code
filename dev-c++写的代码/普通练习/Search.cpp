#include<iostream>
using namespace std;
int SeqSearch(int A[],int n,int k);
int main()
{
	int A[]={4,1,8,6,9,3};
	int k;
	cin>>k;
	int i=SeqSearch(A,6,3);
	cout<<"在数组中是第"<<i<<"个元素"<<endl;
	return 0;
}
int SeqSearch(int A[],int n,int k)   
 
{
	int i;
	for(i=0;i<n;i++)
	if(A[i]==k) 
	   break;
	if(i==n) 
	return 0;
	else
	 return i;


}

