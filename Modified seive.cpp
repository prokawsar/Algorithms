/* Modified seive */

long prime[size];
void seive(){
    int i,j;
      long num;
      prime[0]=2;
      prime[1]=3;
      prime[2]=5;
      
      for(i=3,num=7;i<size;i++,num++){
        while(1){
            for(j=0;prime[j]<=num/2;j++)
                if((num%prime[j])==0){
                  num++;
                  break;
                }
            if(prime[j]>num/2)
                break;
        }
        prime[i]=num;
      }
  }
