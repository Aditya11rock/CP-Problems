#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	vector<vector<int>> mad;
	mad.resize(k);
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		mad[i%k].push_back(p);
	}

	//sort(mad.begin(),mad.end());
	int ans=0;
	for(int i=0;i<k;i++)
	{
		sort(mad[i].begin(),mad[i].end());
		vector<int> toy;
		int count=1;
		//cout<<i<<endl;
		//cout<<"size of i "<<mad[i].size()<<endl;
		for(int j=0;j<mad[i].size()-1;j++)
		{
			//cout<<j<<endl;
			if(mad[i][j]!=mad[i][j+1])
			{
				//cout<<"reach here\n";
				toy.push_back(count);
				count=1;
				if(j==(mad[i].size()-2))
				{
					toy.push_back(count);
				}
			}
			else if(mad[i][j]==mad[i][j+1] && j==(mad[i].size()-2))
			{
				count++;
				toy.push_back(count);
			}
			else{
				count++;
			}
		}
		//cout<<toy.size()<<endl;
		if(!toy.empty())
		{	
			sort(toy.begin(),toy.end());
		for(int j=0;j<toy.size()-1;j++)
		{
			ans=ans + toy[j];
		}
		}
	}
	cout<<ans<<endl;
//cout<<"still their\n";

}

return 0;	
}