#include<iostream>
using namespace std;

// function to minheapify
void minheapify(int a[],int n,int i)
{
    int l=(2*i)+1,m=i;
    int r=(2*i)+2;
    
    if(l<n)
    {
        if(a[l]<a[i])
        m=l;
        
    }
    if(a[r]<a[m] && r<n)
        m=r;
        
    if(m!=i)
    {
        int t=a[i];
        a[i]=a[m];
        a[m]=t;
        minheapify(a,n,m);
    }
}

//to build heap
void build(int a[],int n)
{
    for(int i=(n-1)/2;i>=0;i--)
    {
        minheapify(a,n,i);
    }
}


//to extract minimum from heap
int extractmin(int a[],int n)
{
    int e=a[0];
    
    if(n>1)
    {
        a[0]=a[n-1];
        n--;
        minheapify(a,n,0);
    }
    return e;
}


// to find kth smallest element
int ksmallest(int a[],int n,int k)
{
    if(k>n)
    return -1;
    
    build(a,n);
   
    int s;
    for(int i=1;i<=k;i++)
    {
        s=extractmin(a,n);
    }
    return s;
}


//driver function
int main() {
		
		int arr[] = {7, 10, 4, 3, 20, 15};
	    int n= sizeof(arr)/sizeof(arr[0]);
	    int k=4;
	    
	    cout<<ksmallest(arr,n,k);
	    
	return 0;
}
