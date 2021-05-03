def minRecargas(d, m, n, paradas):
    recargas = 0
    ultima = 0
    fuel = m
    meta = d

    for p in paradas:
        if d <= fuel:
            return recargas

        elif (p - ultima) < fuel:
            fuel -= p - ultima
            d -= p - ultima
            ultima = p

        elif (p - ultima) <= m:
            fuel = m - (p - ultima)
            d -= p - ultima 
            ultima = p           
            recargas += 1

        else:
            return -1
    
    if (meta - ultima) <= m:
        fuel = m - (meta - ultima)
        d -= (meta - ultima)         
        recargas += 1

    return recargas



def main():
    print(f'2 == {minRecargas(950, 400, 4, [200, 375, 550, 750])}')
    print(f'-1 == {minRecargas(10, 3, 4, [1, 2, 5, 9])}')
    print(f'0 == {minRecargas(200, 250, 2, [100, 150])}')
    print(f'5 == {minRecargas(200, 40, 5, [10, 50, 90, 130, 170])}')

main()