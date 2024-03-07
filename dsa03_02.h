#include<stdio.h>
#include<string.h>

int checker(char a[100],char b[100]){
    char p[7][100] = {"Yug","Swayam","Zeeshan","Neel","Akshat","Vaidik","Dharam"};
    char q[7][100]={"1","2","3","4","5","6","7"};
    int c=0;
    for(int i =0;i<7;i++){
        if(strcmp(a , p[i])==0 && strcmp(q[i],b)==0){
            c=1;
        }
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}
        
