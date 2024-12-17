//lcm(a, b) * gcd(a, b) = a*b
///gcd(a, b)=gcd(b, a - b)=gcd(b, a mod b).
int GCD(int A, int B)
{
    if (B == 0)
        return A;
    else
        return GCD(B, A % B);
} 
