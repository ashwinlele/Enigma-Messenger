#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include<ctime>
#include<conio.h>

using namespace std;
int main(){

    //login

    //login: cout<<endl;

    //string username;
    //string password="";

    cout<<endl<<"ENIGMA MESSENGER"<<endl;
    //cout<<endl<<"enter your username:";
    //getline(cin,username);
    //cout<<endl<<"enter your password:";
    //char ch;
   //cout << "Enter pass\n";
    //ch = _getch();
    //while(ch != 13){//character 13 is enter
     // password.push_back(ch);
      //cout << '*';
      //ch = _getch();
    //}
    //cout<<password;

    //ifstream infile1("usn.txt");
    //string usn;
    //infile1>>usn;
    //cout<<endl<<usn;
    //ifstream infile2("pwd.txt");
    //string pwd;
    //infile2>>pwd;
    //cout<<endl;

    //if(username!=usn||password!=pwd){
      //  cout<<endl<<"invalid username or password"<<endl;
        //goto login;
    //}

    //clrscr();

    //MENU

    cout<<endl<<"Welcome to ENIGMA-MESSENGER "<<endl;
    menu: cout<<endl;
    cout<<"press E to enigmate"<<endl;
    cout<<"press D to de-enigmate"<<endl;
    //cout<<"press C to change password"<<endl;
    cout<<"press H for help"<<endl;
    cout<<"press X to exit"<<endl;
    cout<<endl;

    //COMMAND

    char command;
    cin>>command;

    //ERROR

    if (command!='e'&&command!='d'&&command!='h'&&command!='x'){

        cout<<endl<<"ERROR: please type in the correct command!"<<endl;
        goto menu;
    }

    //EXIT

    else if(command=='x'){
        exit(0);
    }

    //CHANGE PASSWORD

    //else if(command=='c'){

        //cout<<endl<<"enter new username:";
        //string user;
        //getline(cin,user);
        //ofstream outfile1("usn.txt");
        //outfile1<<user;

      //  cout<<endl<<"you change your password in the file named pwd.txt"<<endl;
        //goto menu;
        //string pass="";
        //char ty;
        //ty = _getch();
        //while(ch != 13){//character 13 is enter
        //    pass.push_back(ty);
        //    cout << '*';
        //    ty = _getch();
        //}
        //ofstream outfile2("pwd.txt");
        //outfile2<<pass;
    //}

    //HELP

    else if (command=='h'){

        cout<<endl<<"ENIGMA HELP MENU."<<endl;
        cout<<endl<<"press E for enigmation related help.";
        cout<<endl<<"press D for de-enimation related help.";
        cout<<endl<<"for more queries, you can mail the developer at ashwinlele.2009@gmail.com"<<endl;
        char text;
        cout<<endl;
        cin>>text;
        if (text=='e'){
            cout<<endl<<"ENIGMATE option converts the message you type into an encode image file."<<endl;
            cout<<endl<<"type the text you want to code in enigmate.txt in enigma directory";
            cout<<endl<<"run the exe file name enigma in enigma directory and select enigmate option";
            cout<<endl<<"your enigmated image will be saved as image named output.jpg in enigma directory"<<endl;
        }
        if (text=='d'){
            cout<<endl<<"DE-ENIGMATE option extracts the message from the encoded image."<<endl;
            cout<<endl<<"place the image in enigma directory and name it as de-enigmate.jpg";
            cout<<endl<<"run the exe file name enigma in enigma directory and select de-enigmate option";
            cout<<endl<<"your de-enigmated message will be saved as text named message.txt in enigma directory"<<endl;
        }
        goto menu;
    }

    //ENIGMATE

    else if (command=='e'){

        //cout<<endl<<"Type in the message you want to ENIGMATE in note pad or word pad and save it to the app directory named as message.txt"<<endl;
        //cout<<endl;
        ifstream infile("enigmate.txt");
        string message;
        getline(infile,message);
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
        cout<<endl<<"your enigmated message has been exported as an image named output.jpg"<<endl;

        goto menu;
    }


    //DE-ENIGMATE

    else if (command=='d'){

        //cout<<endl<<"Rename the enigmated image as secret and copy it to the app directory"<<endl;
        ifstream infile("de-enigmate.jpg");
        string message;
        getline(infile,message);
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
        cout<<endl<<"your de-enigmated message has been exported as text named message.txt"<<endl;

        goto menu;
    }

}
