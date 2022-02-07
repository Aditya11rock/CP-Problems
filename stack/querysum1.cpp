#include<iostream>
#include<vector>
using namespace std;

int main()
{

	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	

	while(m--)
	{
		int p,q,r;
		cin>>p>>q>>r;
		if(p==1)
		{
			a[q]=r;
		}
		
	else{

			vector<int> v;
			for(int i=q;i<=r;i++)
			{
				bool mat=true;
				for(int j=0;j<v.size();j++)
				{
					if(v[j]==a[i])
					{
						mat=false;
					}
				}
				if(mat)
				{
					v.push_back(a[i]);
				}
			}
		
			cout<<v.size()-1<<endl;
			v.clear();
			v.shrink_to_fit();

		}

	}


	return 0;
}
