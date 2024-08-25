// Next permutation
// arr[] = {3,2,1}  it can be arranged as 123 132 213 231 312 321
// Permutation means all the possible combination or ways are to be written in sorted order
// The combination should be written in ascending order like next would be smaller than current
// to find the permutation of {3,2,1} it would be choose the next possible combination if there's no any possible combination
// (cnt) then it will fall back to the first combination

// brute force  : steps
// Step 1:  generate all combination in sorted order
//  step 2 : check where the given permutation combination lies using linear search
// step 3: once you got using linear search then find the next one

// we are using recursion for generating possible we use recurrsion
