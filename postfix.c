#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 30
int stack[max];
int top=-1;
void push(int val){
    if(top==max-1){
        printf("stack overflow");
    }
    else{
        stack[++top]=val;
    }
}
int pop(){
    if(top==-1){
       
        return -1;
    }
    else{
        return stack[top--];
    }
}
int evalpostfix(char exp[]){
    int i;
    for(i=0;i<strlen(exp);i++){
        if(exp[i]>='0' && exp[i]<='9'){
            push(exp[i]-'0');
        }
        else{
            int val1=pop();
            int val2=pop();
            switch(exp[i]){
                case '+': push(val2+val1); break;
                case '-': push(val2-val1); break;
                case '*': push(val2*val1); break;
                case '/': push(val2/val1); break;
                case '^': push(pow(val2,val1)); break;
            }
        }
    }
    return pop();
}
int main(){
    char exp[30];
    scanf("%s",&exp);
    int res=evalpostfix(exp);
    printf("%d",res);
}
