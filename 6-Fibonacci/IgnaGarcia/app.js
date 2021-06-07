memo = {
    0: 1,
    1: 1
}

const fibonacci = (n) => {
   if(memo[n]) memo[n]
   else {
        memo[n] = fibonacci(n - 1) + fibonacci(n - 2)
    }
    return memo[n];
}

const main = () => {
    let d = new Date()
    let start = d.getTime();

    for(i=0; i<=45; i+=5) console.log(`IN ${i} \t\t OUT ${fibonacci(i)}`)

    let end = d.getTime();
    console.log(`\n-${Object.keys(memo).length}- resultados memoizados`)
    console.log(`El programa demoro -${end - start}- milisecs\n`)
}

main()