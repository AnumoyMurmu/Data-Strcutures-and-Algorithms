#include<iostream>
using namespace std;

void pattern(int n){
	
	for(int i=0; i<n; i++)
	{
		//space
		for(int j=0; j<n-i-1; j++)
		{
			cout<<" ";
		}
		
		
		//star
		for(int j=0; j<i+1; j++)
		{
			
			cout<<" *";
		}
		
		
		//space
		for(int j=0; j<n-i-1; j++)
		{
			cout<<" ";
		}

        // cout<<endl;

        
		
		
		
		cout<<endl;
	}


    for(int i=0;i<n;i++)
    {
        //space
		
		for(int j=0; j<i; j++)
		{
			cout<<" ";
		}
		
		
		//star
		for(int j=0; j<n-(1*i); j++)
		{
			
			cout<<" *";
		}
		
		
		//space
		for(int j=0; j<i; j++)
		{
			cout<<" ";
		}
		cout<<endl;

    }
}

int main(){
	
	int n;
	cin>>n;
	
	pattern(n);
	
	return 0;
}