int jumpingOnClouds(vector<int> c) {
    int total_jumps = 0;

    for(int i = 0; i < c.size(); i++) {

        if( (i+2) < c.size() && c[i+2] == 0) {
            total_jumps++;
            i++;
        } else if( (i+1) < c.size() ){
            total_jumps++;
        }

    }

    return total_jumps;
}