#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<long long>& list, int n) { //using & to use the reference of the list instead of copying it again
    //O(N) TIME, O(1) Space Solution
    long long sumOfElements = 0;

    //take the sum of all elements, if the function is used many times and the list is constant it's more efficient to
    //calculate the sum outside of this function
    for(auto element : list) {
        sumOfElements += element;
    }

    long long leftSum = 0;
    int pivot = 0;
    //using a similar approach to 2 pointers where the left pointer holds the sum of the left elements and
    //the right pointer holds the sum of the right elements.
    for(auto element : list) {
        sumOfElements -= element;
        if(sumOfElements == leftSum) {
            return pivot;
        }
        leftSum += element;
        pivot++;
    }
    return -1;
}
int main() {
    vector<long long>list = {1, 4, 6, 3, 2};
    int n = list.size();
    return findPivot(list, n);
}
