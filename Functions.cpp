#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int gret;
    if(a > b && a > c && a > d){
       gret =  a; 
    }
    else if(b > a && b > c && b > d){
       gret = b; 
    }
    else if(c > a && c > b && c > d){
       gret = c; 
    }
    else{
       gret = d; 
    }
    
    return gret;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

