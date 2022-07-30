#include<stdio.h>
#include<string.h>

int check(char P[])
{ 
    int len,A1[20],A2[20];
    len=strlen(P);
    if(len%2==1)
    {
        int i=0;
        while(i<len/2){
        A1[i]==P[i];
        i++;
        }
        while(i>len/2){
        A2[i]==P[i];
        i++;
        }
    }
    else if(len%2==0) 
    {
    int i=0;
        while(i<len/2){
        A1[i]==P[i];
        i++;
        }
        while(i>len/2){
        A2[i]==P[i];
        i++;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(A1[i]==A2[i])
          return 1;
        return 0;
    }
    
    
}
int main()
{
    char S[60];
    scanf("%s",S);
    printf("%d",check(S));
}