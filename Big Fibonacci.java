// to find nth Fibonacci
public static BigInteger fibo(int n){
		
		BigInteger j = new BigInteger("0");
		BigInteger h = new BigInteger("1");
		BigInteger k = new BigInteger("0");
		BigInteger t = new BigInteger("0");
		BigInteger i = new BigInteger("1");
		
		while (n>0){
			if(n%2==1){
				t = j.multiply(h);
				j = i.multiply(h).add( j.multiply(k)) .add(t);
				i = i.multiply(k).add(t);
				}
				t = h.multiply(h);
				h = k.multiply(h).multiply(new BigInteger("2")).add(t);
				k = k.multiply(k).add(t);
				n = (int) n/2;
				} 
		return j;	
	}
