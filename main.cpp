#include <iostream>
#include <string.h>
using namespace std;
float number(char a){
switch (a) {
    case '0': return 0;
    break;
    case '1':return 1;
    break;
    case '2':return 2;
    break;
    case '3':return 3;
    break;
    case '4':return 4;
    break;
    case '5':return 5;
    break;
    case '6':return 6;
    break;
    case '7':return 7;
    break;
    case '8':return 8;
    break;
    case '9':return 9;
    break;
    case '.':return -1;
    break;
    default: break;
}

}
double aashar(double a,int s){
    for(int i=0;i<s;i++){
        a=a/10;
    }
 return a;
}
int main()
{ char a[200]; int s=0,sw=0,l,n; double x=0,y=0,w,b,k;
 gets(a);
 l=strlen(a);
    for(int i=0;i<l;i++){
        b=number(a[i]);
        if(sw==0&&b!=-1){
            x=x*10+b;
        }
         if(b==-1) {sw=1;

         }
         if(sw==1){ s=s+1; b=number(a[i+1]);
         k=aashar(b,s);
         y=y+k;
         }
       }
       cout<<endl;
    w=x+y;
    printf("answer:%f",2*w);
    return 0;
    }

