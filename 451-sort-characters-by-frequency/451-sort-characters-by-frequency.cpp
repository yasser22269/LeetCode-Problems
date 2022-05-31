class Solution {
public:
    string frequencySort(string s) {

        return sortArr(s);
    }

    string sortArr(string str)
    {
        map<char,int>m;
        for (int i=0;i<str.size() ;i++ ){
            m[str[i]]++;
        }
        vector<pair<int, char> > vp;
    for (auto it = m.begin(); it != m.end(); it++){
            for (int i=0;i<it->second ;i++ )
                vp.push_back(make_pair(it->second,it->first));
     }

        sort(vp.rbegin(), vp.rend());
        string s;
        for (int i = 0; i < vp.size(); i++)
            s += vp[i].second;
        
        return s;
    }
};