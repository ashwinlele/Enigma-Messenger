#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include<ctime>
#include<conio.h>

using namespace std;
int main(){
    ifstream infile("enigmate.txt");
        string message;
        infile>>message;
        cout<<endl<<message<<endl;

        cout<<endl<<"enigmising..."<<endl;

        int l=0;
        int j=0;
        while(message[j]!='\0'){
            l++;
            j++;
        }
        //cout<<endl<<l<<endl;

        string key[10];
        int c[10];
    srand(clock());
    for(int i=0;i<10;i++){
        c[i]=(rand()%9)+1;
        key[i]=c[i];
    }
        //string key[1];
        //int k=clock()%10;
        //if(k==0)k=1;
        //key[0]=k;
        //cout<<endl<<k<<endl;

        message.append(key[0]);
        message.append(key[1]);
        message.append(key[2]);
        message.append(key[3]);
        message.append(key[4]);
        message.append(key[5]);
        message.append(key[6]);
        message.append(key[7]);
        message.append(key[8]);
        message.append(key[9]);


        for(int i=0;i<10;i++){
            int k=c[i];

        //key1
        if(k==0){
            int n=0;
            long long int m;

            for(int i=0;i<l;i++){
                m=pow(n,0.2);
                long long int temp=message[i];
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
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
                temp+=m;
                message[i]=temp;
                n+=1;
            }
        }
        }


        //cout<<endl<<message<<endl;

        //cout<<endl<<"your message has been decoded, type in name of the output file desired."<<endl;
        //char name[10];
        //cin.getline(name,10);

        ofstream outfile("output.jpg");
        outfile<<message;
        }

