{
    b = b + (b - a + 1) % 2;
    for (int i = 0; i < a; i++)
    {
        cout << " ";
    }
    for (int i = a; i < b; i++)
    {
        cout << "*";
    }
    cout << endl;
}
bool shrink_and_check(int &left, int &right)
{
    left++;
    right--;
    return (left > right);
}