#include <iostream> 
#include <algorithm> 
#include <vector>
using namespace std; 

int num[100000][2];
vector<pair<int,int> > v;
int main(void){
    int n;
    scanf("%d", &n);

    int a,b;
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        v.push_back(pair<int, int> (a,b));
    }

    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++){
        printf("%d %d", v[i].first, v[i].second);
        printf("\n");
    }
}