#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c = 0;
        int l = int(s[1]-'a')+1;

        if(s[0]=='a' && s[1]!='a'){
            c = 0;
            c+=l;
        }
        else if(s[0]=='b' && s[1]>='b'){
            c = 25;
            c+= l;
        }else if(s[0]=='c' && s[1]>='c'){
            c = 50;
            c+= l;
        }else if(s[0]=='d' && s[1]>='d'){
            c = 75;
            c+= l;
        }else if(s[0]=='e' && s[1]>='e'){
            c = 100;
            c+= l;
        }else if(s[0]=='f' && s[1]>='f'){
            c = 125;
            c+= l;
        }else if(s[0]=='g' && s[1]>='g'){
            c = 150;
            c+= l;
        }else if(s[0]=='h' && s[1]>='h'){
            c = 175;
            c+= l;
        }else if(s[0]=='i' && s[1]>='i'){
            c = 200;
            c+= l;
        }else if(s[0]=='j' && s[1]>='j'){
            c = 225;
            c+= l;
        }else if(s[0]=='k' && s[1]>='k'){
            c = 250;
            c+= l;
        }else if(s[0]=='l' && s[1]>='l'){
            c = 275;
            c+= l;
        }else if(s[0]=='m' && s[1]>='m'){
            c = 300;
            c+= l;
        }else if(s[0]=='n' && s[1]>='n'){
            c = 325;
            c+= l;
        }else if(s[0]=='o' && s[1]>='o'){
            c = 350;
            c+= l;
        }else if(s[0]=='p' && s[1]>='p'){
            c = 375;
            c+= l;
        }else if(s[0]=='q' && s[1]>='q'){
            c = 400;
            c+= l;
        }else if(s[0]=='r' && s[1]>='r'){
            c = 425;
            c+= l;
        }else if(s[0]=='s' && s[1]>='s'){
            c = 450;
            c+= l;
        }else if(s[0]=='t' && s[1]>='t'){
            c = 475;
            c+= l;
        }else if(s[0]=='u' && s[1]>='u'){
            c = 500;
            c+= l;
        }else if(s[0]=='v' && s[1]>='v'){
            c = 525;
            c+= l;
        }else if(s[0]=='w' && s[1]>='w'){
            c = 550;
            c+= l;
            c++;
        }else if(s[0]=='x' && s[1]>='x'){
            c = 575;
            c+= l;
            c++;
        }else if(s[0]=='y' && s[1]>='y'){
            c = 600;
            c+= l;
            c++;
        }else if(s[0]=='z' && s[1]>='z'){
            c = 625;
            c+= l;
            c++;
        }

        cout << c-1 << endl;
    }


    return 0;
}
