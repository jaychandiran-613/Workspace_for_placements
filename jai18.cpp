#include <bits/stdc++.h>
using namespace std;

int calcAns(int N, vector<int> arr, int X) {
    // Write your code here
    int x=0;
    int sum,y,finalres=0;
    vector<int> arr1;
    for(int i=0;i<N-1;i++)
    {
      
           sum=0,y=0,x=0;
            y=x++;

            arr1.push_back(arr[i]);
            sum+= arr1[0];
            int j=i+1;

            while(j<=N)
            {
                cout<<arr[j]<<endl;
                
                if((sum + arr[j]) >= (X*(y+2)) )
                {
                    y=x++;
                    arr1.push_back(arr[j]);
                    sum+=arr1[y];
                }
                j++;  
            }
            
            if(finalres<y)
            {
                finalres=y;
            }

            cout<<"----------";
            
            
        
    }
    
    return finalres;
    

}


int main() {

   int N;
   cin>>N;
   int x;
    vector<int> Arr(N);
    for(int j=0; j<N; j++) {
        cin>>x;
        Arr.push_back(x);
    }
    
    int X;
    cin>>X;

    int result = calcAns(N, Arr, X);

    cout << result << "\n";

    return 0;
}

