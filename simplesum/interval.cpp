#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;

int main()
{
    int t,casec=1;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<pair<int,int>> mad;
        int l,r;
        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            mad.push_back(make_pair(l,r));
        }
        
        while(true && c>0)
        {
            bool val=true;
            map<int,int> bi;
            int mid;
            for(auto it:mad)
            {
                mid=(it.first+it.second)/2;
                if(mid!=it.first)
                {
                    val=false;
                    auto it2=bi.find(mid);
                    if(it2!=bi.end())
                    {
                        it2->second++;
                    }
                    else{
                        bi.insert(make_pair(mid,1));
                    }
                }
            }
            if(val==false)
            {
                int p,man=INT_MIN;
                for(auto it:bi)
                {
                    if(it.second>man)
                    {
                        man=it.second;
                        p=it.first;
                    }
                }
                
                vector<pair<int,int>> cod;
                for(auto it:mad)
                {
                    if(p>it.first && p<it.second)
                    {
                        cod.push_back(make_pair(it.first,p));
                        cod.push_back(make_pair(p,it.second));
                    }
                    else{
                        cod.push_back(make_pair(it.first,it.second));
                    }
                }
                mad.clear();
                mad=cod;
                c--;
                
            }
            else{
                break;
            }
            
        }
        
        cout<<"Case #"<<casec<<": "<<mad.size()<<endl;
        casec++;
        
    }
    
    return 0;
}