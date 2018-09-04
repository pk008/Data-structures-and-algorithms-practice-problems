#include<iostream>
#include<string>
using namespace std;

int main() 
{

	    string s= "aaaabbaa";
	    int maxlength=1,st=0,e=0,start=0,end=0;
	    
	    //for odd length palindromes
	    for(int i=0;i<s.length();i++)
	    {
	            int j=i-1;
	            int k=i+1;

	        while(j>=0 && k<s.length() && s[j]==s[k])
	        {
	            start=j;
	            end=k;
	            j--;
	            k++;
	        }
	       
	        if(maxlength < (end-start+1) )
	        {
	            maxlength= (end-start+1);
	            st=start;
	            e=end;
	        }
	    }
	  
	    //for even length palindromes
	    start=0,end=0;
	    for(int i=0;i<s.length();i++)
	    {
	        int k=0,j=0;
	            if(s[i]==s[i+1])
	            {
	                j=i-1;k=i+2;
	                
	                if(maxlength<(i+1 - i)+1)
	                {   
	                    maxlength=(i+1 - i)+1;
	                    st=i;
	                    e=i+1;
	                }
	            }

	        while(j>=0 && k<s.length() && s[j]==s[k])
	        {
	            start=j;
	            end=k;
	            j--;
	            k++;
	        }
	       
	        if(maxlength < (end-start+1) )
	        {
	            maxlength= (end-start+1);
	            st=start;
	            e=end;
	        }
	    }
	    
	    // Printing the Longest Palindromic Substring
	    for(int i=st;i<e+1;i++)
	    cout<<s[i];
	    cout<<endl;
	return 0;
}
