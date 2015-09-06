
char num[1000];
int mod = 0;
 
size = strlen(num);
 
for(int i = 0; i < size; i++) {
 
    mod = (mod*10 + num[i] - '0') % 11 ;
}

if(mod == 0){
  printf("Multiple of 11\n");
}
else printf("Not Multiple of 11\n");
