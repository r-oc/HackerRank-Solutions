int countingValleys(int steps, string path) {
    

    int current_level = 0; // starting at sea level is 0
    int num_valleys = 0;

    // -1 --> Was negative last step, 0 --> was sea level last step, 1 --> positive last step.
    int previous_step = 0;

    for(int i = 0; i < steps; i++) {

        if(path[i] == 'D') {
            current_level--;
        } else {
            current_level++;
        }

        if(previous_step == -1 && current_level == 0) {
            num_valleys++;
        }

        if(current_level < 0) {
            previous_step = -1;
        } else if (current_level > 0) {
            previous_step = 1;
        } else {
            previous_step = 0;
        }

    }

    return num_valleys;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}
