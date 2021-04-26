let esMod5 = n => n / 5 >= 1 ? true : false

let esMod10 = n => n / 10 >= 1 ? true : false

let cambioMin = (m) => {
    let k = 0
    let arr = []

    if (esMod10(m)) {
        k += Math.trunc(m/10)
        arr.push(`10*${Math.trunc(m/10)}`)
        m = m%10
    }
        
    if (esMod5(m)) {
        k += Math.trunc(m/5)
        arr.push(`5*${Math.trunc(m/5)}`)
        m = m%5
    }
    
    if(m > 0) {
        k += m
        arr.push(m)
    }

    return [k, arr]
}


let main = () => {
    for(let m = 1; m<130; m++) {
        res = cambioMin(m)
        console.log(`Input: ${m}\t\tOutput: ${res[0]}\t\tExplicacion: ${res.splice(1)}`)
    }
}

main()