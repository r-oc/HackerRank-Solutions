int hourglassSum(vector<vector<int>> arr) {

    vector<vector<int>> indicies = {
            {0,0}, {0,1}, {0,2}, {1,1}, {2,0}, {2,1}, {2,2}
    };

    vector<int> sums;
    int current_sum;

    for(int i = 1; i <= 16; i++) {

        current_sum = 0;

        for(auto index : indicies) {
            current_sum += arr[index[0]][index[1]];
        }

        sums.push_back(current_sum);

        if(i % 4 == 0) {

            // sub 4 from every x val and increase y by 1
            for(auto& index : indicies) {
                index[1] -= 3;
                index[0] += 1;
            }

        } else {

            for(auto& index : indicies) {
                index[1]++;
            }

        }

    }
    return *max_element(sums.begin(), sums.end());
}