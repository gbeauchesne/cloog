/* Generated from clay.scop by CLooG 0.20.0-5e05a27 gmp bits in 0.00s. */
extern void hash(int);

/* Useful macros. */
#define floord(n,d) (((n)<0) ? -((-(n)+(d)-1)/(d)) : (n)/(d))
#define ceild(n,d)  (((n)<0) ? -((-(n))/(d)) : ((n)+(d)-1)/(d))
#define max(x,y)    ((x) > (y) ? (x) : (y))
#define min(x,y)    ((x) < (y) ? (x) : (y))

#ifdef TIME 
#define IF_TIME(foo) foo; 
#else
#define IF_TIME(foo)
#endif

#define S1(i) { hash(1); hash(i); }

void test()
{
  /* Scattering iterators. */
  int __ii0;
  /* Original iterators. */
  int i;
  for (__ii0=0;__ii0<=10;__ii0++) {
    for (i=4*__ii0;i<=min(41,4*__ii0+3);i++) {
      S1(i);
    }
  }
}
