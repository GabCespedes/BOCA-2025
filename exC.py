import math

def energiaMinima(N: int) -> int:
    dp = [math.inf] * (N + 1)

    dp[1] = 2
    dp[2] = 3

    for k in range(3, N + 1):
        for i in range(1, k // 2 + 1):
            custo_atual = dp[i] * dp[k - i]
            dp[k] = min(dp[k], custo_atual)

    return dp[N]

if __name__ == "__main__":
    N = int(input())
    resultado = energiaMinima(N)
    print(f"{resultado}")
