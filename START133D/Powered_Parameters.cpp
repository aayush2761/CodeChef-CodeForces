#include <iostream>
#include <vector>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while(test--){
        int n;
        cin >> n;
        vector<int> v(n+1);
        
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        
        long long answer = 0;
        
        for(int i = 1; i <= n; i++){
            long long left = v[i];
            if(left == 1){
                answer += (long long)n;
            } else {
                long long pow = 1;
                for(int j = 1; j <= n; j++){
                    pow = left * pow;
                    if(pow > 1000000000LL){
                        break;
                    } else {
                        long long right = v[j];
                        if(pow <= right){
                            answer++;
                        }
                    }
                }
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}
