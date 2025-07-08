//输入时 6个整数，分别表示两个时间点的时、分、秒。
//输出时，两个时间点的时间差，格式为时:分:秒。
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f;
    g=a*3600+b*60+c;
    h=d*3600+e*60+f;
    if(g>h){
        g-=h;
        printf("%02d:%02d:%02d\n", g/3600, (g%3600)/60, g%60);
    }
    else if(g<h){
        h-=g;
        printf("%02d:%02d:%02d\n", h/3600, (h%3600)/60, h%60);
    }
    return 0;        
}