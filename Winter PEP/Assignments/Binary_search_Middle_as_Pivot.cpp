class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low >= high) return;
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }

    int partition(vector<int>& arr, int low, int high) {
        int mid = low + (high - low) / 2;
        swap(arr[mid], arr[high]);    

        int pivot = arr[high];
        int pi = low;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                swap(arr[j], arr[pi]);
                pi++;
            }
        }
        swap(arr[pi], arr[high]);
        return pi;
    }
};
