int solution(int number, int limit, int power) {
    int answer = 0;
    int cnt = 0;
    
    // number의 제곱근 만큼만 반복
    for (int i = 1; i <= number; i++)
    {
        cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j == i / j)
                {
                    cnt += 1;
                }
                else
                {
                    cnt += 2;
                }
            }
        }
        // 최대 공격력 체크
        if (cnt > limit)
        {
            answer += power;
        }
        else
        {
            answer += cnt;
        }
    }
    
    return answer;
}