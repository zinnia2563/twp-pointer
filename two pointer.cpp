Skip to content
 
Search…
All gists
Back to GitHub
@Ruhulcse
Ruhulcse/gist:53957902db7d33fb1447438f4c28d104
Created now • Report abuse
Code
Revisions
1
Clone this repository at &lt;script src=&quot;https://gist.github.com/Ruhulcse/53957902db7d33fb1447438f4c28d104.js&quot;&gt;&lt;/script&gt;
<script src="https://gist.github.com/Ruhulcse/53957902db7d33fb1447438f4c28d104.js"></script>
gistfile1.txt
#include <cstdlib>
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void bidirectional(vector<int>& data, int target) {
    int i = 0, j = data.size() - 1;
    while (i < j) {
        if (data[i] == target || data[j] == target) {
            break;
        } else {
            i++;
            j--;
        }
    }
}

int main() {
    srand(time(0));
    vector<int> data;
    int n = 1;
    int cnt = 0;
    while (cnt <= 1000000) {
        if (n % 5 == 0 || n % 8 == 0) {
            int number = n;
            data.push_back(number);
            cnt++;
        }
        n++;
    }

    // Starting time
    auto start = high_resolution_clock::now();
    bidirectional(data, 2142860);
    // Get ending time
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
@zinnia2563
Comment
 
Leave a comment
 
Footer
© 2024 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact
Manage cookies
Do not share my personal information
