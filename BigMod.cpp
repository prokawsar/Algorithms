

#define MOD 1000000007
#define LL long long

using namespace std;

LL BigMod(LL b, int p,  LL MOD){
	if(p == 0) return 1;

	if(p % 2 == 1){
		LL part1 = b % MOD;
		LL part2 = BigMod(b, p-1, MOD);
		return (part1*part2) % MOD;
	}
	else if(p % 2 == 0){
		LL half = BigMod(b, p/2, MOD);
		return (half*half) % MOD;
	}
}
