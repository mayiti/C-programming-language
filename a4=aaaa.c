/*#include<stdio.h>
int main(){
int i,j,k,n,x;
char ch[10];
scanf("%[^\n]",ch);
for(i=0;ch[i]!='\0';i++){
        x=0;
for(j=i;ch[j]!='\0';j++){
if(ch[i]==ch[j]){
    x++;
}
}
printf("%c = %d",ch[i],x);

}
}
*/
#include<stdio.h>
int main(){
int i,j,k,n,x;
char ch[2],ch2;
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++){
    if(i%2!=0){
        x=ch[i];
        while(x!=0){
            printf("%c ",ch[i-1]);
            x--;
        }
        break;
    }
}



}
