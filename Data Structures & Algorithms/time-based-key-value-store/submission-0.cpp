class TimeMap
{
public:
    map<string, vector<pair<int,string>>> KT;
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        KT[key].push_back(make_pair(timestamp,value));
    }

    string get(string key, int timestamp)
    {
        if(!KT.count(key))
            return "";
       vector<pair<int,string>>& TimeStamps = KT[key];
       auto it = upper_bound(
                    TimeStamps.begin(),TimeStamps.end(),make_pair(timestamp,""),[]
                    (const pair<int,string>& a , const pair<int,string>& b){
                        return a.first < b.first;
                    });
        if(it == TimeStamps.begin()) return "";

        return (--it)->second;
    }
};