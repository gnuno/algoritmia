let esMod5 = n => n / 5 >= 1 ? true : false

let esMod10 = n => n / 10 >= 1 ? true : false

let cambioMin = (m) => {
    let k = 0
    let arr = []

    if (esMod10(m)) {
        k += Math.trunc(m/10)
        for(let i=0; i<Math.trunc(m/10); i++) arr.push(10)
        m = m%10
    }
        
    if (esMod5(m)) {
        k += Math.trunc(m/5)
        for(let i=0; i<Math.trunc(m/5); i++) arr.push(5)
        m = m%5
    }
    
    k += m
    for(let i=0; i<m; i++) arr.push(1)

    return [k, arr]
}


let main = () => {
    for(let m = 1; m<130; m++) {
        res = cambioMin(m)
        console.log(`Input: ${m}\t\tOutput: ${res[0]}\t\tExplicacion: ${res.splice(1)}`)
    }
}

main()