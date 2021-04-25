use std::io;

fn main() {
    let mut cantidad = String::new();
    let mut output: i32 = 0;

    println!("¿Qué cantidad de dinero (ENTRE 1 Y 130) desea convertir?: ");

    io::stdin()
        .read_line(&mut cantidad)
        .expect("Hubo un fallo al leer cantidad de monedas.");

    let mut numero: u32 = match cantidad.trim().parse() {
        Ok(num) => num,
        Err(_) => 0,
    };

    if numero >= 1 && numero <= 130 {
        while numero > 0 {
            match numero {
                n if n >= 20 => numero = numero - 20,
                n if n >= 5 => numero = numero - 5,
                _ => numero = numero - 1
            }

            output = output + 1;
        }

        println!("Se requiere(n) {} moneda(s)", output);
    }
}