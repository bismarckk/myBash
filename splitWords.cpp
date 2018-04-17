#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void splitToWords(vector<const char*>& data)
{
    string str;    
    string subs;
    unsigned int i=0;
    vector<string> v;
    getline(cin,str);
    istringstream iss(str);
    
    while(iss>>subs)
    {
        //probowalem odrazu przypisania data.push_back(subs.c_str()); nie dzialalo prawidlowo
        v.push_back(subs);
        //cout<<v[i]<<endl;  
        i++;                
    }
    
    for(i =0;i<v.size();i++)
    {
        
        data.push_back(v[i].c_str());
        cout<<data[i];
    }
        cout<<endl;
        data.push_back(NULL);   
    cin.clear();
}



