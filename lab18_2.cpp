void myString(char *&p ,int N){
	p = new char[26];    
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	N = 0;
}