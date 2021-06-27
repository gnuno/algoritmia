fn main() {
    let muchos_numeros = vec![3,3,4,77,4,43,2,7,4,2,7,9,2,3,2,3,4,1235];
    let ejemplo_1 = vec![3,2,1];
    let ejemplo_2 = vec![1,2];
    let ejemplo_3 = vec![2,2,3,1];

    assert_eq!(el_tercero_mas_grande(muchos_numeros), Err(1i8));
    assert_eq!(el_tercero_mas_grande(ejemplo_1), Ok(1));
    assert_eq!(el_tercero_mas_grande(ejemplo_2), Ok(2));
    assert_eq!(el_tercero_mas_grande(ejemplo_3), Ok(1));
}

fn el_tercero_mas_grande(mut nums:Vec<i16>) -> Result<i16, i8>{

    if nums.len() > 104 || nums.len() <= 1{
        return Err(1i8);
    }
    
    nums.sort_unstable();
    nums.dedup();

    if nums.iter().any(|e| *e > 231 || *e < -231){
        eprintln!("Uno de los valores no esta en el rango estipulado.");
        return Err(1i8);
    }

    nums.sort_by(|a, b| b.cmp(a));

    if nums.len() <= 2 {
        return Ok(nums.get(0).unwrap().clone());
    }

    Ok(nums.get(2).unwrap().clone())
}