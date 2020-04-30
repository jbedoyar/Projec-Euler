/* Problemas Projec Euler 1-10 solo
    solo descomentarlos para probarlos*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
bool ispalidrome(int n);
bool isprime(int n);
long long int gcd(long long int a, long long int b);
long long int lcm(long long int a, long long int b);
int main()
{
	/* Problem 1
	int sum = 0;
	for(int i = 0; i < 1000;i++)
	{
		if(i%3 == 0 || i % 5 == 0)
		{
			sum+=i;
		}
	}
	cout<<sum<<endl;*/

	/* Problem 2
	int sum = 0;
	int x = 1;
	int y = 2;
	while (x<= 4000000){
		if (x% 2 == 0){
			sum +=x;
		}
		int z = x+y;
		x = y;
		y = z;
	}
	cout<<sum<<endl;*/
	// Problem 3
	/*long long int x = 600851475143;
	for(long long i = 2; i * i <= x; ++i)
	{
		while(x % i == 0 && x != i)
		{
			x /=i;
		}
	}
	cout<<x<<endl;
	*/

	//Problem 4
	/*int maxpalindrome = -1;
	for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000;j++){
            int prod = i * j;
            if (ispalidrome(prod) && prod > maxpalindrome){
                maxpalindrome = prod;
            }
        }
	}
	cout<<maxpalindrome<<endl;
	//Problem 5

	/*long long int x;
	cin>>x;
	long long int result =1;
	for(long long int i = 2; i <= x; i++)
    {
        result = lcm(result, i);
    }
    cout<<result<<endl;*/

	//Problem 6

	/*int sum_square = 0;
	int square_sum = 0;
	int i = 1;
	int result;
	while(i <= 100)
	{
		sum_square += pow(i,2);
		square_sum += i;
		i++;
	}
	square_sum = pow(square_sum,2);
	cout<<sum_square<<" "<<square_sum<<endl;
	result = square_sum - sum_square;
	cout<<result;
	*/
    //Problem 7
    /*int c = 0;
    int index = 2;
    while(true)
    {
        if(isprime(index))
            c++;
        if(c == 10001)
            break;
        index++;
        cout<<index<<" "<<c<<endl;
    }
    cout<<index;*/
    // Problem 8
    /*int adyacente = 13;
    string number = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    long long int maxprod = -1;
    for (int i=0; i + adyacente <= number.length(); i++){
        long long int prod = 1;
        for (int j = 0; j < adyacente; j++){
            prod *= number[i+j] - '0';
        }
        maxprod = max(prod,maxprod);
    }
    cout<<maxprod;*/
	/*Problem 9
	int result;
	for (int a = 1; a < 1000; a++)
	{
		for(int b = a + 1; b < 1000; b++)
		{
			int c = 1000 - a - b;
			if ((a * a) + (b * b) == (c * c))
			{
				result = a * b * c;
			}
		}

	}
	cout<<result;
	*/
	/*// Problem 10
	long long int limit = 2000000;
	long long int sum = 5;
	long long int i = 5;
	while(i <= limit)
	{
		if(isprime(i)){
			sum += i;
			cout<<i<<endl;
		}

		i++;
	}
	cout<<sum<<endl;
	*/
	return 0;
}
bool isprime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
long long int gcd(long long int a, long long int b)
{
    while (a != 0)
    {
        long long int c = a;
        a = b% a;
        b = c;
    }
    return b;
}
long long int lcm(long long int a, long long int b)
{
    return a * (b/ gcd(a, b));
}
bool ispalidrome(int n)
{
    int num;
    num = n;
    int reversa = 0;
    int digito;
    while(n != 0)
    {
        digito = n % 10;
        reversa = (reversa*10) + digito;
        n /= 10;
    }
    return (num == reversa);
}
