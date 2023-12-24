#include<iostream>
using namespace std;
class ImagnaryNo{
int r;
int i;
public:
void set(int c,int y){
    r=c;
    i=y;
}
void get(){
    cout<<r;
    if(i>0){
    cout<<"+";}

    cout<<i<<"i"<<endl;
}
ImagnaryNo(){
    i=r=0;
}
ImagnaryNo(int a,int b){
    r=a;
    i=b;
}
ImagnaryNo(ImagnaryNo &t){
    r=t.r;
    i=t.i;
}
void add(ImagnaryNo &t){
    r+=t.r;
    i+=t.i;
}
ImagnaryNo ad(ImagnaryNo &t){
   ImagnaryNo temp;
    temp.i=i+t.i;
    temp.r=r+t.r;
    return temp;
}
};

int main(){
    
    ImagnaryNo a(2,2),b(1,1),c(b);
    c=a.ad(b);
    a.add(b);
    c.get();
    b.get();
    a.get();
}
