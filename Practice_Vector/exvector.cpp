    #include"iostream"
    #include"vector"
    using namespace std;
    int main(){
        int n;
        vector<int> arr;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        for(vector<int>::iterator it=arr.begin();it!=arr.end();it++){
            cout<<*it<<endl;
        }
        int target;
        cin>>target;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                cout<<i;
            }
        }      
        // for(int i=0;i<n;i++){
        //     cout<<arr[i];
        // }
        return 0;
    }

