#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void removeGreatestTwo(vector<int> arr) {
 vector<int> ans;
 priority_queue <int, vector<int>, less<int> > heap;  
  for (int i = 0; i < (int) arr.size(); ++i) {
    heap.push(arr[i]);
  }
  if (heap.size() <= 2) cout << "Size too small \n";
  else {
    heap.pop();
    heap.pop();
    while (!heap.empty()) {
      ans.push_back(heap.top());
      heap.pop();
    }
    sort(ans.begin(), ans.end());
    cout<<"Ans: \n";
    for (int i = 0; i < (int) ans.size(); ++i) cout << ans[i] << " ";
    cout<<"\n";
  }
  
}

int main() {
    int n;
    int k;
    cout<<"Enter the number of test cases: "<<endl;
    cin>>n;
    while(n--){
    cout<<"Enter the number of elements: "<<endl;
    cin >> k;
    vector<int> arr;
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < k; ++i) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }   
    removeGreatestTwo(arr);  
  }
  return 0;
}