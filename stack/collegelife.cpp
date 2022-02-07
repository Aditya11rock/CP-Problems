#include<iostream>
#include<vector>
using namespace std;

int minrate(int a,int b)
{

	if(a<=b)
	{
		return a;
	}
	else{
		return b;
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,egg,bar,o,m,c;
		cin>>n>>egg>>bar>>o>>m>>c;
		int totalproduct=0,pseudocount=0;
		if(egg>=bar)
		{
			totalproduct=bar;
			pseudocount=egg-bar;
			totalproduct=totalproduct + (pseudocount/2);
		}
		else{
			totalproduct=egg;
			pseudocount=bar - egg;
			totalproduct=totalproduct + (pseudocount/3);
		}

		if(totalproduct>=n)
		{
			
			if(egg<=n || bar<=n)
			{
				if(egg<=bar)
				{ vector<int> z;
					for(int i=0;i<=egg;i++)
					{int eggleft=egg-i,barleft=bar-i;
						if(o<=m)
						{
							int omletbought=minrate(n-i,eggleft/2);
							int milkshakebought=minrate(n-(i+omletbought),barleft/3);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}
							
						}
						else{
							int milkshakebought=minrate(n-i,barleft/3);
							int omletbought=minrate(n-(i+ milkshakebought),eggleft/2);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}
							
						}

					}
					int minans=z[0];

					for(int i=1;i<z.size();i++)
					{
						if(z[i]<minans)
						{
							minans=z[i];
						}
					}
					cout<<minans<<endl;

				}
				else{
					vector<int> z;
						for(int i=0;i<=bar;i++)
						{
							int eggleft=egg-i,barleft=bar-i;
						if(o<=m)
						{
							int omletbought=minrate(n-i,eggleft/2);
							int milkshakebought=minrate(n-(i+omletbought),barleft/3);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}
							
						}
						else{
							int milkshakebought=minrate(n-i,barleft/3);
							int omletbought=minrate(n-(i+ milkshakebought),eggleft/2);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}
							
						}

					}

				int minans=z[0];

					for(int i=1;i<z.size();i++)
					{
						if(z[i]<minans)
						{
							minans=z[i];
						}
					}
					cout<<minans<<endl;

				}
			}
			else{
				vector<int> z;

					for(int i=0;i<=n;i++)
					{
							int eggleft=egg-i,barleft=bar-i;
						if(o<=m)
						{
							int omletbought=minrate(n-i,eggleft/2);
							int milkshakebought=minrate(n-(i+omletbought),barleft/3);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}

						}
						else{
							int milkshakebought=minrate(n-i,barleft/3);
							int omletbought=minrate(n-(i+ milkshakebought),eggleft/2);
							if((i + omletbought + milkshakebought)==n)
							{
								int y=(c*i)+(omletbought * o)+ (m * milkshakebought);
								z.push_back(y);
							}
							
						}
					}
					int minans=z[0];

					for(int i=1;i<z.size();i++)
					{
						if(z[i]<minans)
						{
							minans=z[i];
						}
					}
					cout<<minans<<endl;

			}
		}
		else{

			cout<<"-1\n";
		}

	}

	return 0;

}