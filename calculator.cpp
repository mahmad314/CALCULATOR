#include<iostream>
#include<iomanip>
using namespace std;

int  u[100];
double  powa(double bas,double exp){
    double  res=1;
    
    if(exp>0){

    for(int i=0;i<exp;i++){
       res*=bas;
    }}else if(exp<0){
         for(int i=0;i>exp;i--){
       res=res/bas;
    }}
    
    return res;
}
long long bina(long long  x){
     long long lastdig=0,dec=0;
    int i=0;
    while(x!=0){
        lastdig=(x%10);
        dec+=((lastdig)*(powa(2,i)));
        ++i;
        x=x/10;

    } return dec;
}
int bin(int x){
    int dec=0, lastdig=0;
    int i=0;
    while(!x%10==0){
        lastdig=x%10;
        dec+=((lastdig)*(powa(8,i)));
        ++i;
        x=x/10;

    } return dec;
}
int  dec(long long  d){
     int i=0;
    

    int rem=0;
    while(!d==0){
        
    rem=d%2;
    u[i]=rem;
    d=d/2;
    i++;
    } return i;
    }
double  deco(long long  d){
     int i=0;
    

    int rem=0;
    while(!d==0){
        
    rem=(d%8);
    u[i]=rem;
    d=d/8;
    i++;
    } 
     return i;
}
     
 double sum(double x,double y){
    double sum =x+y;
    return sum;
    }
    double dif(double x,double y){
    double dif =x-y;
    return dif;
    }
     double mul(double x,double y){
    double mul =x*y;
    return mul;
    }
     double div(double x,double y){
    double div =x/y;
    return div;
    }

    
     double fact(double x){
    double fact =1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
    }
    double cos(double t){
    double cose=0;
    for(int i=0;i<=20;i++){
        cose+=(powa(-1,i)*powa(t,2*i))/(fact(2*i));
    }return cose;
}
double sine(double p){
    double sini=0;
    int k=1;
    for(int i=0;i<=15;i++){
        
        sini=sini+ (powa(-1,i)*(powa(p,k)/fact(k)));
        k=k+2;
    }
    return sini;
}
 double loge(double t){
    double k,ln=0,z=1;
    k=(t-1)/(t+1);
    while(z<=10000){
        ln+=((powa(k,z))/z);
        z=z+2;
    }return 2*ln;
}
double ax(double base, double exp){
    double g=0,t,m=1;
    for(int k=1;k<1000;k++){
        if((exp/0.5==m)&&(base<0)){
      cout<<"wrong entry"<<endl;      
     exit(0); 
        }m=m+2;
    }
    t=loge(base);   
    if(base<0){
         base=-base;
         t=loge(base);
    }
      
for(int k=0;k<=100;k++){
    g+=((powa(exp,k))*(powa(t,k)))/(fact(k));
}
return g;
}
    int main(){
        do{
   char w;
    int k=0;
     double a=0,b=0;
    cout<<"-------------WELCOME TO CALCULATOR--------------"<<endl;
    cout<<"--------------Enter------ "<<endl;
    cout<<"1)  Arithmatic operations"<<endl;
    cout<<"2)   exponential calculations"<<endl;
    cout<<"3)  factorial calculation"<<endl;
    cout<<"4)  permutations and combination calculations"<<endl;
    cout<<"5)  conversions calculations "<<endl;
    cout<<"6)  Trignometric  calculations "<<endl;
    cout<<"7)  logarithmic   calculations "<<endl;
    cin>>k;
    
    if(k==1){
        do{
            char t;
        cout<<"enter the number you want to perform operations"<<endl;
        cout<<"enter the  first number"<<endl;
        cin>>a;
        cout<<"enter the  second number"<<endl;
     cin>>b;
        int g=0;
         cout<<"--------------Enter------ "<<endl;
    cout<<"1)  sum"<<endl;
    cout<<"2)   difference "<<endl;
    cout<<"3)  multiply"<<endl;
    cout<<"4)  divide"<<endl;
        cin>>g;
        if(g==1){
            cout<<"sum is  "<<sum(a,b)<<endl;
            
          }
           if(g==2){
            cout<<"difference  is  "<<dif(a,b)<<endl;
          } if(g==3){
            cout<<"multiplication   is  "<<mul(a,b)<<endl;

          }
          if((g==4)){ 
            if(b!=0){
            cout<<"division    is  "<<div(a,b)<<endl;
    } else {cout<<"division by zero is undefined"<<endl;}}
    cout<<"do you want to repeat Arithmatic operations  {y/n} "<<endl;
      cin>>t;
      if((t=='n')||(t=='N')){
        break;
      }if((t=='y')||(t=='Y')){

      }else{ cout<<"wrong entry "<<endl;
        break;}
        }while(true);
}else if(k==2){
    cout<<"enter the number you want to calculate power"<<endl;
        cout<<"enter the base"<<endl;
        cin>>a;
        cout<<"enter the  exponent "<<endl;
     cin>>b;
     if((a!=0)&&(b!=0)){
         cout<<" answer     is  "<<ax(a,b)<<endl;
     
     }
} else  if(k==3){
    cout<<"enter the number you want to calculate"<<endl;
        cout<<"enter the number "<<endl;
        cin>>a;
        if(a>=0){
cout<<"factorial   is  "<<fact(a)<<endl;
}else {
    cout<<"factorial of negative numbers is not defined"<<endl;
}
}
  else if(k==4){
    int m=0;
    cout<<"-------enter----- "<<endl;

 cout<<"1)  permutaion calculation"<<endl;
    cout<<"2)   combination  calculations"<<endl;
    cin>>m;

        cout<<"enter the number you want to perform operations"<<endl;
        cout<<"enter the  total  number of chances"<<endl;
        cin>>a;
        cout<<"enter the  feasible number of chances"<<endl;
     cin>>b;
     if((m==1)){
     {if((a>=0)&&(b>=0)&&(a>=b)){
        double c;
        c=((fact(a))/(fact(a-b)));
        cout<<"permutation is "<<c<<endl;
     }else {
        cout<<"wrong entry"<<endl;
     }    }}
       if((m==2)){
        if((a>=0)&&(b>=0)&&(a>=b)){
        double q;
        q=(fact(a))/((fact(a-b))*(fact(b)));
        cout<<"combination  is "<<q<<endl;
     }else {
        cout<<"wrong entry"<<endl;
     }     
     }}
     if(k==5){
        int e=0;
        cout<<"--------------Enter------ "<<endl;
    cout<<"1)  binary to decimal "<<endl;
    cout<<"2)   octal to decimal"<<endl;
    cout<<"3)  decimal to binary  "<<endl;
    cout<<"4)  decimal to octal "<<endl;
    cin>>e;
    if(e==4){
               long  long  g,j;
    cout<<"enter the  number"<<endl;
    cin>>g;
    j=deco(g);
    --j;
    cout<<"in octal  number is  "<<endl;
    for( j ;j>=0;j--){
        cout<<u[j];
    }
          }
          if(e==3){
             long long  g,j;
    cout<<"enter the  number"<<endl;
    cin>>g;
    j=dec(g);
    --j;
    cout<<"in binary   number is  "<<endl;
    for( j ;j>=0;j--){
        cout<<u[j];
    }
          }
          if(e==2){
            int k1;
            if((k1>0)||(k1<8)){
    cout<<"this program converts number from octal  to decimal"<<endl;
    cout<<"enter the number"<<endl;
    cin>>k1;
    cout<<" octal number "<<k1<<"  in  decimal  is "<<bin(k1)<<endl;
          } else {cout<<"wrong entry"<<endl;
          }
           }
           if(e==1){
            long long    k2;
    cout<<"this program converts number from binary to decimal"<<endl;
    cout<<"enter the number"<<endl;
    cin>>k2;
    cout<<"binary number "<<k2<<"  in  decimal  is "<<bina(k2)<<endl;
           }
     }if(k==6){
        int s;
    cout<<"1 for cosine"<<endl;
    cout<<"2 for sine"<<endl;
    cout<<"3 for tangent "<<endl;
    cout<<"4 for secant  "<<endl;
    cout<<"5 for cosecant "<<endl;
    cout<<"6 for cotangent"<<endl;
    cin>>s;
    double a,l;
int j,o=1;
cout<<"enter the angle in degree"<<endl;
cin>>j;
l=j%360;
a=(l*3.141592654/180);
if(s==1){
cout<<fixed<<setprecision(5);
cout<<"cos "<<j<<" = "<<cos(a)<<endl;
}
if(s==2){
cout<<fixed<<setprecision(5);
cout<<"sin"<<j<<"= "<<sine(a);}

     if(s==3){
    double tane=0;
    tane+=(sine(a))/(cos(a));
    cout<<fixed<<setprecision(5);
    for(int i=1;i<=99;i++){
    if(i%2==1){
    if(l/90==i){
        cout<<"MATH ERROR"<<endl;
        exit(0);
            }
        }
    }
    cout<<"tan"<<j<<" = "<<tane<<endl;
    

     }
     if(s==4){

cout<<fixed<<setprecision(5);
for(int i=1;i<=99;i++){
    if(i%2==1){
    if(l/90==i){
        cout<<"MATH ERROR"<<endl;
        exit(0);
            }
        }
    }
cout<<"secant  "<<j<<" = "<<1/cos(a)<<endl;
}
if(s==5){
    for(int i=0;i<=100;i++){
    if(i%2==0){
    if(l/90==i){
        cout<<"MATH ERROR"<<endl;
        exit(0);
            }
        }
    }
cout<<fixed<<setprecision(5);
cout<<"cosecant"<<j<<"= "<<1/sine(a);}
if(s==6){
    double tane=0;
    tane+=(sine(a))/(cos(a));
    for(int i=0;i<=100;i++){
    if(i%2==0){
    if(l/90==i){
        cout<<"MATH ERROR"<<endl;
        exit(0);
            }
        }
    }
    cout<<fixed<<setprecision(5);
    cout<<"cot"<<j<<" = "<<1/tane<<endl;
}

}     if(k==7){
    int q;
    cout<<"enter the enumber"<<endl;
    cin>>a;
    cout<<"select"<<endl;
    cout<<"1)log with base e"<<endl;
    cout<<"2)log with base 10"<<endl;
    cin>>q;
    if(a>0){
        if(q==1){
    cout<<fixed<<setprecision(4)<<endl;
    cout<<"natural log of "<<a<<" is "<<loge(a)<<endl;}
    else if(q==2){
        double m=loge(a)*0.4343;
            cout<<fixed<<setprecision(4)<<endl;
        cout<<"log "<<a<<"   with base 10    ="<<m<<endl;
    }
    else {
        cout<<"natural log of negative numbers is not defined"<<endl;
    }}
}
     cout<<endl;
      cout<<"do you want to repeat {y/n} "<<endl;
      cin>>w;
      if((w=='n')||(w=='N')){
        cout<<"bye SIR/MAM"<<endl;
        exit(0);
      }if((w=='y')||(w=='Y')){

      }else{ cout<<"wrong entry "<<endl;
        exit(0);}

        }
      while(3>1);
    return 0;}