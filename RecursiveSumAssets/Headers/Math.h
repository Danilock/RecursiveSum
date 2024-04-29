#pragma once

class Math
{
private:
    int Index = 0;
    
public:
    int Sum = 0;
    
    int RecursiveSum(int limit)
    {
       if(Index <= limit)
       {
           Sum += Index;
           Index++;
           RecursiveSum(limit);
       }

        return Sum;
    }
};
