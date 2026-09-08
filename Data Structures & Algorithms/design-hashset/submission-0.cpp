class MyHashSet {
public:
 unordered_set<int>s;
    MyHashSet() 
    {
      
    }
    
    void add(int key) {
        cout<<"111 Insert "<<key<<endl;
        s.insert(key);
        
    }
    
    void remove(int key) {
        cout<<"222 Remove "<<key<<endl;


        auto itr=s.find(key);
        if(itr!=s.end())
        {
            s.erase(itr);
        }
        
    }
    
    bool contains(int key) {
        cout<<"333 contains "<<key<<endl;

        auto itr=s.find(key);
        if(itr!=s.end())
        {
           return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */