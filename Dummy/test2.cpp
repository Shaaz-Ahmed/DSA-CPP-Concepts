


bool canEatAll(const vector<int>& piles, int h, int m) {

    long long time = 0;

    for (int bananas : piles) {

        time += (bananas + m - 1) / m;

    }

    return time <= h;

}

 
