#include <iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int people_num;
    cin>>people_num;
    
    stack<pair<int,int>> st;
    int now,cnt_same_height=0;
    long long  cnt_pair=0;
    
    for(int i=0; i<people_num ; i++){
        cin>>now;
        cnt_same_height=1;
        
        while(!st.empty() && st.top().first < now){
            cnt_pair += st.top().second;
            st.pop();
        }
        
        if(!st.empty() ){
            if(st.top().first== now){
                cnt_pair += st.top().second;
                cnt_same_height = (st.top().second +1);
                
                if(st.size() > 1)
                    cnt_pair++;
                st.pop();
            }else
        cnt_pair++;
        }
        st.push(make_pair(now, cnt_same_height));
    }
    cout<<cnt_pair<<'\n';
    return 0;
}

/*
n = 7 입력
Now =2 처음에 st = (2 1) cnt_pair = 0
Now = 4, cnt_pair = 1, st = empty, st = (4 1)
Now = 1, while문 통과, cnt_pair = 2, st= (1 1) (4 1)
Now = 2, while문에서 (1 1) 빠지고 cnt_pair=3, cnt_pair=4, st=(2 1) (4 1)
Now = 2, if문에서 cnt_pair=5, cnt_same_height=2, cnt_pair=6, st = (4 1) st= (2 2) (4 1)
Now = 5, while문에서 (2 2) 빠지면서 cnt_pair=8, st =(4 1) 빠지고, cnt_pair=9, st = (5 1)
Now = 1, cnt_pair= 10, st = (1 1) (5 1)
*/