#include <stdio.h>

int main(void){
// 1. receba 3 strings do usuário e imprima essas strings em ordem alfabética
  char str[100], str2[100], str3[100];
  
  scanf("%s %s %s", str, str2, str3);
  
  for(int i = 0; i<100; i++){
    if(str[i]<str2[i] && str[i]<str3[i]){
      printf("%s\n", str);
      if(str2[i]<str3[i]){
        printf("%s\n%s", str2, str3);
        break;
      }
      else if(str2[i]>str3[i]){
        printf("%s\n%s", str3, str2);
        break;
      }
    }
    else if(str2[i]<str[i] && str2[i]<str3[i]){
      printf("%s\n", str2);
      if(str[i]<str3[i]){
        printf("%s\n%s", str, str3);
        break;
      }
      else if(str[i]>str3[i]){
        printf("%s\n%s", str3, str);
        break;
      }
    }
    else if (str3[i]<str[i] && str3[i]<str2[i]){
      printf("%s\n", str3);
      if(str[i]<str2[i]){
        printf("%s\n%s", str, str2);
        break;
      }
      else if(str[i]>str2[i]){
        printf("%s\n%s", str2, str);
        break;
      }
    }
  }  
}