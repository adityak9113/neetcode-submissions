class MyHashMap {
public:
    vector<pair<int,int>>hashVec;
    MyHashMap() 
    {
        
    }
    
    void put(int key, int value) 
    {
        for(int i=0;i<hashVec.size();i++)
        {
            if(hashVec[i].first==key)
            {
                hashVec[i].second=value;
                return;
            }
        }
        hashVec.push_back({key,value});
    }
    
    int get(int key) 
    {
        for(int i=0;i<hashVec.size();i++)
        {
            if(hashVec[i].first==key)
            {
                return hashVec[i].second;          
            }
        }
        return -1;
    }
    
    void remove(int key) 
    {
        for(int i=0;i<hashVec.size();i++)
        {
            if(hashVec[i].first==key)
            {
               hashVec.erase(hashVec.begin()+i);        
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */