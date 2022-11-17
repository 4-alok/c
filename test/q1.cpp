// WAP for the activity selection problem using greedy apporach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct activity {
    int start;
    int finish;
};

bool compare(activity a, activity b) {
    return a.finish < b.finish;
}

int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;
    vector<activity> v(n);
    cout << "Enter the start and finish time of each activity: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i].start >> v[i].finish;
    }
    sort(v.begin(), v.end(), compare);
    int count = 1;
    int finish = v[0].finish;
    for (int i = 1; i < n; i++) {
        if (v[i].start >= finish) {
            count++;
            finish = v[i].finish;
        }
    }
    cout << "Maximum number of activities that can be performed: " << count << endl;
    return 0;
}