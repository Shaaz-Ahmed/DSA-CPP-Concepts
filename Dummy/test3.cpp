

int minimumRateToEatBananas(vector<int> v, int h) {

    int left = 1; 

    int right = *max_element(v.begin(), v.end()); 

 

    while (left < right) {

        int mid = left + (right - left) / 2;

        if (canEatAll(v, h, mid)) {

            right = mid;

        } else {

            left = mid + 1;

        }

    }

    return left;

}
