#include<iostream>
#include<cmath>
using namespace std;

int find_sqrt(int n);
int sqrtx(int i, int j, int n);

int main()
{
    int n, x;
    cout<<"Enter number "<<endl;
    cin>>n;
    x = mySqrt(n);
}

int mySqrt(int x) {
        long long int low = 0, high = (long long int)(x);
        long long int mid;
        if(x <= 1)return x;
        while((high - low) > 1){
            mid = low + (high - low) / 2;
            long long int sqr = (mid * mid);
            if(sqr > x){
                high = mid;
            }else{
                low = mid;
            }
        }
        return (int)low;
    }