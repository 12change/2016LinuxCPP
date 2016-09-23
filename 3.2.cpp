int gcd(int big,int small){
	return small == 0 ? big : gcd(small,big%small);
}
int lcm(int big,int small){
	return big*small/gcd(big,small);
}