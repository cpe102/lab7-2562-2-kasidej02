//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;


int main(){
    string status ="";
    int age,h,m;
    cout<<"Age : ";
    cin>>age;
    if(age<=20){
        cout<<"Height : ";
        cin>>h;
        if(h<=160){
            status = "UNFRIEND";
            
        }else if(h<175){
            status = "FRIEND";
            
        }else{
            cout<<"Money : ";
            cin>>m;
            if(m>69000000){
            status = "MARRIED";
        }else{
            status = "ONE NIGHT STAND";
        }
        } 
    }else if(age<30){
        cout<<"Money  : " ;
        cin>>m;
        if(m>10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else
    {
        status = "UNFREIND";
    }
    
    cout<< status ;
}