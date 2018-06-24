#include <iostream>
using namespace std;

template<typename T>
T res(const T a, const T b){
    return a-b;
}
template<typename T>
T sum(const T a, const T b){
    return a+b;
}
template<typename T>
T mul(const T a,const T b){
    return a*b;
}

int main(){

    cout<<sum<int>(4,5)<<endl;
    cout<<sum<float>(1.5,1.7)<<endl;
    cout<<res<int>(8,2)<<endl;
    cout<<res<float>(4.2,3.9)<<endl;
    cout<<mul<int>(2,5)<<endl;
    cout<<mul<float>(3.5,2.6)<<endl;
return 0;
}
