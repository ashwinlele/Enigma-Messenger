#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include<ctime>
#include<conio.h>

using namespace std;
int main(){
    ifstream infile("de-enigmate.jpg");
        string message;
        infile>>message;
        //cout<<endl<<message<<endl;

        cout<<endl<<"de-enigmising..."<<endl;

        int l=0;
        int i=0;
        while(message[i]!='\0'){
            l++;
            i++;
        }
        //cout<<endl<<l<<endl;

        int c[10];
        for(int i=0;i<10;i++){
            c[i]=message[l-i-1];
        }
        //cout<<endl<<k<<endl;
        l=l-10;

        for(int i=0;i<10;i++){
            int k=c[i];

        //key1
        if(k==0){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,0.2);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }

        //key2
        if(k==1){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,1);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }

        //key3
        if(k==2){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,1);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=2;
            }
        }

        //key4
        if(k==3){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,2);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }

        //key5
        if(k==4){
            int n=0;
            long long int m;

            for(int i=10;i<l;i++){
                m=pow(n,2);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=2;
            }
        }

        //key6
        if(k==5){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,0.5);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }

        //key7
        if(k==6){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,3);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=2;
            }
        }

        //key8
        if(k==7){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,4);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }

        //key9
        if(k==8){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,4);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=2;
            }
        }

        //key10
        if(k==9){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,5);
                long long int temp=message[i];
                temp-=m;
                message[i]=temp;
                n+=1;
            }
        }
        }

        string output=message.substr(0,l);

        cout<<endl<<output<<endl;

        //cout<<endl<<"your message has been decoded, type in name of the output file desired."<<endl;
        //char name[10];
        //cin.getline(name,10);

        ofstream outfile("message.txt");
        outfile<<output;
        }
