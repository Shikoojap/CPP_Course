#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
void v_test1(){
        vector<int> v1,v3(7,50);
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(10);
    for(const auto &v2: v1)
        cout<<v2<<" ";
    for(const auto &v2 : v3)
        cout<<v2<<" ";
}
void v_test2(){
    vector<int> v1{5, 10 , -20 , -50 , 70 , 50 , -2555};
    vector<int>:: iterator it;
    it=v1.begin();

    while(it!=v1.end()){
        if(*it<0){
            it=v1.erase(it);
        }
        else
            it++;
    }
    for(const auto &i : v1 )
        cout<<i<<" ";
}
void v_test3(){
    vector<int> v{5, 10 , -20 , -50 , 70 , 50 , -2555};
    auto it = find(v.begin(),v.end(),-20);
    if(it!= v.end()){
        vector<int>v2{2,5,4};
        v.erase(it);
        v.insert(it,v2.begin(),v2.end());
    }
    for(const auto & val : v )
        cout<<val<<" ";
}

void v2d_test1(){
    vector<string>Matrix{"Mahmoud","Maryuma","25/9"};
    cout<<Matrix[0].size()<<"\n";
    cout<<Matrix[1].size()<<"\n";
    cout<<Matrix[2].size()<<"\n";

}
void print_v2d( vector<vector<int>> &v2d){
        static int i=1;
    for(const auto  & row : v2d){
        cout<<i<<": ";
        for(const auto & col : row)
            cout<<col<<" ";
        cout<<"\n";
        i++;
    }
}
void v2d_test2(){
    vector<int>row(5,1);

    vector<vector<int>>v2d(3,row);

    print_v2d(v2d);
}
void v3d_test1(){
    vector<vector<vector<int>>>v_3d(5,vector<vector<int>>(6,vector<int>(7,5)));
    cout<<v_3d.size()<<" \n";
    for(int i=0;i<v_3d.size();i++)
        print_v2d(v_3d[i]);
}
int main (){
    v3d_test1();
    return 0;
}