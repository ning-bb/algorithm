//二分查找法
int fun(int *str,int key,int leng)
{
    int low = 0,high = leng - 1;
    int index;

    while(high >= low)
    {
        index = (low+high)/2;

        if(str[index] == key)
        {
            return index;
        }
        else if(str[index] < key)
        {
            low = index + 1;
        }
        else
        {
            high = index - 1;
        }
    }

    return -1;
}

//冒泡排序
void fun1(int *str,int leng)
{
    int i,j;

    for(i = 0;i<leng -1;i++)
    {
        for(j = 0;j < leng - 1 -i;j++)
        {
            if(str[j]<str[j+1])
            {
                temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
    }
}