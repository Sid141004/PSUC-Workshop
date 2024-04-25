//RECURSION

int nSum(int n)
{
    // base condition.
    if (n == 0) {
        return 0;
    }
    // recursive call.
    int res = n + nSum(n - 1);
    return res;
}

int main()
{
    int n = 5;

    int sum = nSum(n);

    printf("Sum of First %d Natural Numbers: %d", n, sum);
    return 0;
}
