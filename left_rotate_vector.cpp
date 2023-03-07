vector<int> rotLeft(vector<int> a, int d) {
    
    int head_value;
    
    for(int i = 0; i < d; i++) {
        
        head_value = a[0];
        
        for(int j = 0; j < a.size(); j++) {
            a[j] = a[j + 1];
        }
        a[a.size() - 1] = head_value;
        
    }
    
    return a;
    
}