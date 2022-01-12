// Написать три функции, которые получают строку и копируют ее вдругую строку, используя разные циклы: while, for, do...while. Сколько икаких параметров должно быть у функций? Что должны возвращать функции?
#include <stdio.h>
#include <stdlib.h>
const int M=50;
void copy_wh(char*, char*);
void copy_for(char*, char*);
void copy_dwh(char*, char*);
int main(){
           char str[M],str1[M];
           printf("Введите строку:\n");
           gets(str);
           copy_wh(str,str1);
           printf("%s\n%s\n",str,str1);
           copy_for(str,str1);
           printf("\n%s\n%s\n",str,str1);
           copy_dwh(str,str1);
           printf("\n%s\n%s\n",str,str1);
           str[0]=getch;
return 0;
}
void copy_wh(char* s, char* s1){
           int i=0;
           while(s[i]!='\0'){
           s1[i]=s[i];
                          i++;
           }
           s1[i]='\0';
} void copy_for(char* s, char* s1){
           int i;
           for(i=0;s[i]!='\0';i++)
                          s1[i]=s[i];
           s[i+1]='\0';
} void copy_dwh(char* s, char* s1){
           int i=0;
           do{ s1[i]=s[i];
                          i++;
           }    while(s[i]!=0);
           s[i]='\0'; }
