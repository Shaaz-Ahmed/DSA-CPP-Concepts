// Leader in array means everything in right should be smaller
// arr[]= {10, 22,12,3,0,6} Here the 22 is leader because all element is smaller than 22 next 12 is also leader because all element is smaller
// 3 is not leader because the 6 is greater, next 6 is leader because theres no any element after that

// arr[] = {10 , 22 ,12 , 3 , 0 , 6}   and: all the leader is {22, 12 , 6}
// Brute Force : we will pickup the i and check if anything is greater than a[i] then its not a leader

for(int i=0; i<n; i++){
    leader = true;
    for(int j=i+1; j<n; j++){
        if(a[j]>a[i]){
            leader = false;
            break;
        }
    }
    if(leader == true) ans.add(a[i]);
}

// Optimal Solution
for(int i=0; i<n; i++){
    leader = true;
    for(int j=i+1; j<n; j++){
        if(a[j]>a[i]){
            leader = false;
            break;
        }
    }
    if(leader == true) ans.add(a[i]);
}
