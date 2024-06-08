using namespace std;
/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int findMedian(vector<int> arr) {
    //vector<int> sorted_arr;
    int arr_len = arr.size();
    int median;
    sort(arr.begin(),arr.end());
    median = arr[arr_len/2];
    return median;
}