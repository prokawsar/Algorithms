

static BigInteger Fact(int n){
		BigInteger sum = new BigInteger(1+"");
	
		for(int i = 1; i<= n; i++) {
		
			sum = sum.multiply(BigInteger.valueOf(i));
			
		}
		return sum;
	}
