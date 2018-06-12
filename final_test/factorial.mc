const int k=100;
const int k2[5];
int r= -10;
int kk=10;
void main(){
   int n,f;
   int t[5];
   read(n);
   write(n);
   f=factorial(n);
   write(f);
}
int factorial(int n){
   if(n==1) return 1;
   else return n*factorial(n-1);
}