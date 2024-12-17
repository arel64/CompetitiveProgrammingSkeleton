//𝑂(𝑛⋅log⁡(log⁡(𝑛)))
void sieve(int N)
{
    bool isPrime[N + 1];
    for (int i = 0; i <= N; ++i) {
        isPrime[i] = true;
    }
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for (int i = 2; i * i <= N; ++i) {
        
        // Mark all the multiples of i as composite numbers
        if (isPrime[i] == true) {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
} 
