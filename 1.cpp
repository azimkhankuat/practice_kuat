/* #1
#include <iostream>
using namespace std;
int main(){
  cout<<"Silence is golden";
return 0;
}
*/
/* #2
#include <iostream>
using namespace std;
int main(){
    cout<<"Monday"<<endl;
    cout<<"November"<<endl;
    cout<<"Kuat";
return 0;
}
*/
/* #3
#include <iostream>
using namespace std;
int main(){
    cout<<"0"<<endl;
    cout<<"00"<<endl;
    cout<<"000"<<endl;
    cout<<"0000"<<endl;
    cout<<"00000";
return 0;
}
*/
/* #4
#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
       cout<<"AAAAAAAA \n";
    }
return 0;
}
*/
/* #5
#include <iostream>
using namespace std;
int main(){
    cout<<"*     *     * \n";
    cout<<" *   * *   * \n";
    cout<<"  * *   * *  \n";
    cout<<"   *     *  ";
return 0;
}
*/
/* #6
#include <iostream>
using namespace std;
int main(){
    cout<<1+2-4;
return 0;
}
*/
/* #7
#include <iostream>
using namespace std;
int main(){
    cout<<0.5+0.25;
return 0;
}
*/
/* #8
#include <iostream>
using namespace std;
int main(){
    int a=2, b=3;
    cout<<(a+4*b)*(a-3*b)+a*a;
return 0;
}
*/
/* #9
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x=-2;
    cout<<abs(x)+pow(x,5);
return 0;
}
*/
/* #10
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;
    x=1.7;
    cout<<pow(x+1, 2)+3*(x+1)<<endl;
    x=3;
    cout<<pow(x+1, 2)+3*(x+1);
return 0;
}
*/
/* #11
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x=-2.34;
    cout<<(abs(x-5)-sin(x))/3+sqrt(pow(x, 2)+2014)*cos(2*x)-3;
return 0;
}
*/
/* #12
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x=3.6;
    cout<<exp(x-2)+abs(sin(x))-pow(x, 4)*cos(1/x);
return 0;
}
*/
/* #13
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=0.1, b=0.2, x=1;
    cout<<pow((pow(x,2)+b), 0.2)-(b*b*pow(sin(x+a), 3))/x;
return 0;
}
*/
/* #14
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<" "<<a*b;
return 0;
}
*/
/* #15
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<pow(a,2)<<" "<<pow(a,3);
return 0;
}
*/
/* #16
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    a=a+2;
    b=b-3;
    c=pow(c,2);
    cout<<a+b+c;
return 0;
}
*/
/* #17
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,ave,dif;
    cin>>a>>b>>c;
    ave=(a+b+c)/3;
    dif=2*(a+c)-3*b;
    cout<<ave<<" "<<dif;
return 0;
}
*/
/* #18
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<4*a<<" "<<a*a;
return 0;
}
*/
/* #19
#include <iostream>
using namespace std;
int main(){
    double p1, p2;
    cin>>p1>>p2;
    int a=300, b=400, n=1;
    cout<<1*(a*p1/1000+b*p2/1000)<<" ";
    a=1800;
    b=2000;
    n=3;
    cout<<3*(a*p1/1000+b*p2/1000);
return 0;
}
*/
/* #20
#include <iostream>
using namespace std;
int main(){
    double s,t;
    cin>>s>>t;
    cout<<(s*1000)/(t*60);
return 0;
}
*/
/* #21
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,p,s,c;
    cin>>a>>b;
    c=sqrt(a*a+b*b);
    s=(a*b)/2;
    p=a+b+c;
    cout<<s<<" "<<p<<" "<<c;
return 0;
}
*/
/* #22
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double t;
    cin>>t;
    cout<<(t*9/5)+32;
return 0;
}
*/
/* #23
#include <iostream>
using namespace std;
int main(){
    double x,a,y,k;
    cin>>x>>a;
    cin>>y;
    y=(y*a)/x;
    cin>>k;
    k=k*x/a;
    cout<<y<<" "<<k;
return 0;
}
*/
/* #24
#include <iostream>
using namespace std;
int main(){
    int d, s, sum;
    cin>>d>>s>>sum;
    s=s/100;
    for(int i=0; i<d; i++){
        sum=sum+3;
        sum+=sum*s;
    }
    cout<<sum;
return 0;
}
*/
/* #25
#include <iostream>
using namespace std;
int main(){
    int w, m, y;
    cin>>w>>m>>y;
    cout<<w*7+m*30+y*365;
return 0;
}
*/
/*#26
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
return 0;
}
*/
/* #27
#include <iostream>
using namespace std;
int main(){
    int a,b,c, sum, dif, sum3;
    cin>>a>>b>>c;
    sum=a+b;
    dif=c-a;
    sum3=a+b+c;
    a=sum;
    b=dif;
    c=sum3;
    cout<<a<<" "<<b<<" "<<c;
return 0;
}
*/
/* #28
#include <iostream>
using namespace std;
int main(){
    double sum, p;
    cin>>sum>>p;
    sum=sum+(sum*(p/100)*5);
    cout<<sum;
return 0;
}
*/
/* #29
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
return 0;
}
*/
/* #30
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a;
    a=a*a;
    a=a*a;
    cout<<a<<endl;
    cin>>a;
    a=a*a;
    b=a*a;
    a=a*b;
    cout<<a<<endl;
    cin>>a;
    b=a*a;
    c=b*a;
    d=c*c;
    e=d*d;
    a=c*e;
    cout<<a;
return 0;
}
*/
/* #31
#include <iostream>
using namespace std;
int main(){
    int s1,s2,n;
    s1=647*170;
    s2=30*30;
    n=s1/s2;
    cout<<s1/s2;
return 0;
}
*/
/* #32
#include <iostream>
using namespace std;
int main(){
    int chastnoe, cifra, x, y=237;
    cifra=y/100;
    chastnoe=y%100;
    x=chastnoe*10+cifra;
    cout<<x;
return 0;
}
*/
/* #33
#include <iostream>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    if(x>=0 && y>=0){
        cout<<sqrt(x-sqrt(y));
    }
return 0;
}
*/
/* #34
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>3){
        cout<<a+10;
    }else cout<<a-10;
return 0;
}
*/
/* #35
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<7){
        cout<<"Yes";
    }
    if(a>10){
        cout<<"No";
    }
    if(a==9){
        cout<<"Error";
    }
return 0;
}
*/
/* #36
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m==1){
        cout<<"January";
    }
    if(m==2){
        cout<<"February";
    }
    if(m==3){
        cout<<"March";
    }
    if(m==4){
        cout<<"April";
    }
    if(m==5){
        cout<<"May";
    }
    if(m==6){
        cout<<"June";
    }
    if(m==7){
        cout<<"July";
    }
    if(m==8){
        cout<<"August";
    }
    if(m==9){
        cout<<"September";
    }
    if(m==10){
        cout<<"October";
    }
    if(m==11){
        cout<<"November";
    }
    if(m==12){
        cout<<"December";
    }
return 0;
}
*/
/* #37
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a;
    }
    if(b>a){
        cout<<b;
    }
return 0;
}
*/
/* #38
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a-b==100 || b-a==100){
        cout<<"yes";
    }else cout<<"no";
return 0;
}
*/
/* #39
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    if(a>b){
        cout<<"yes";
    }
    else{
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b;
    }
return 0;
}
*/
/* #40
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>-10 && a<10){
        a=a+5;
    }
    else{
        a=a-10;
    }
    cout<<a;
return 0;
}
*/
/* #41
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>100 || a<-100){
        a=0;
    }
    else{
        a=a+1;
    }
    cout<<a;
return 0;
}
*/
/* #42
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>=2 && a<=5){
        b=a+10;
    }
    if(a>7 && a<40){
        b=a-100;
    }
    if(a<=0 || a>3000){
        b=a*3;
    }
    else{
        b=0;
    }
    cout<<b;
return 0;
}
*/
/* #43
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m==12 || m==1 || m==2){
        cout<<"Winter";
    }
    if(m>=3 && m<=5){
        cout<<"Spring";
    }
    if(m>=6 && m<=8){
        cout<<"Summer";
    }
    if(m>=9 && m<=11){
        cout<<"Autumn";
    }
return 0;
}
*/
/* #44
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a!=10 && b!=10 && b%2==0){
        cout<<a+b;
    }
    else{
        cout<<a*b;
    }
return 0;
}
*/
/* #45
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>10 && b>10 && c>10 && a%3==0 && b%3==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}
*/
/* #46
#include <iostream>
using namespace std;
int main(){
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    if(a%5==0){
        sum+=a;
    }
    if(b%5==0){
        sum+=b;
    }
    if(c%5==0){
        sum+=c;
    }
    if(sum==0){
        cout<<"error";
    }
return 0;
}
*/
/* #47
#include <iostream>
using namespace std;
int main(){
    int a,b,c,max;
    cin>>a>>b>>c;
    if(a>b && a>c){
        max=a;
    }
    if(b>a && b>c){
        max=b;
    }
    if(c>a && c>b){
        max=c;
    }
    cout<<max;
return 0;
}
*/
/* #48
#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b)>(b+c)&&(a+b)>(b+c)){
        cout<<a<<" "<<b;
   }
   if((b+c)>(a+b)&&(b+c)>(a+c)){
        cout<<b<<" "<<c;
   }
   if((a+c)>(a+b)&&(a+c)>(b+c)){
        cout<<a<<" "<<c;
   }
return 0;
}
*/
/* #49
#include <iostream>
using namespace std;
int main(){
    int a[4];
    for (int i=0; i<4;i++){
        cin>>a[i];
    }
    int m = 0;
    for (int i=0;i<4;i++){
        if (a[i]%2==0){
        if (a[i]>m){
            m = a[i];
        }
        }
    }
    if (m!=0){
        cout<<m;
    } else {
        cout<<"Not found";
    }
return 0;
}
*/
/* #50
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b || a==c || b==c){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}
*/
