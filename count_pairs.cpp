int sockMerchant(int n, vector<int> ar) {
    
    int num_pairs = 0;
    map<int, int> pairs;
    
    for(int i = 0; i < n; i++) {
        pairs[ar[i]]++;
    }
    
    for(auto i : pairs) {
        
        if(i.second % 2 == 0) {
            num_pairs += i.second;
        } else {
            num_pairs += i.second - 1;
        }
        
    }
    
    return num_pairs/2;
    
}