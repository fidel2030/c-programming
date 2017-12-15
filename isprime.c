// determine whethere integer N is prime number
int isPrime( int n)
{
    //Check if N is less sthan or equal to 1
    //if so, answer "no"
    if(n <= 1)
    {
        return 0;       
    }
    //Count from 2 to N exclusive, counter i
    for( int i = 2; i < n; i++)
    {
        //Check if N mod i is 0
        if( n % i == 0)
        {

            // if so, answer no
            return 0;
        }
    }
    //Answer yes otherwise
    return 1;

}

