char firstRepeating(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > 1)
        {
            return str[i];
        }
    }

    return '\0';
}