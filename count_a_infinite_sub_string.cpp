long repeatedString(string s, long n) {

    long count_string = 0;
    long count = 0;

    if(s == "a") {
        return n;
    }

    for(char i : s) {
        if(i == 'a') {
            count_string++;
        }
    }

    int rem = n % s.size();

    if(rem == 0) {
        return count_string * (n/s.size());
    } else {

        count = count_string * ( ((n - rem)/s.size()));

    }

    int j = 0;
    for(int i = 0; i < rem; i++) {

        if(j >= s.size()) {
            j = 0;
        }

        if(s[j] == 'a') {
            count++;
        }

        j++;
    }

    return count;
}