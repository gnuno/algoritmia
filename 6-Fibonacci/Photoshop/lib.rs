
#[cfg(test)]
mod fibonacci {
    use super::*;
    
    #[test]
    fn assert_fibonacci(){
        assert_eq!(fibonacci(0), 0);
        assert_eq!(fibonacci(1), 1);
        assert_eq!(fibonacci(2), 1);
        assert_eq!(fibonacci(3), 2);
        assert_eq!(fibonacci(10), 55);
    }
    
    #[test]
    #[should_panic]
    fn assert_fibonacci_in_negative_case(){
        fibonacci(-10);
    }

    #[test]
    #[should_panic]
    fn assert_fibonacci_recursive_in_negative_case(){
        fibonacci_reccursive(-10);
    }

    #[test]
    fn assert_fibonacci_recursive(){
        assert_eq!(fibonacci_reccursive(0), 0);
        assert_eq!(fibonacci_reccursive(1), 1);
        assert_eq!(fibonacci_reccursive(3), 2);
        assert_eq!(fibonacci_reccursive(4), 3);
        assert_eq!(fibonacci_reccursive(10), 55);
    }
}

pub fn fibonacci(iter:i32) -> i32{
    if iter < 0 {
		panic!("{} is negative!", iter);
	}
    if iter == 0 { return 0; }
    if iter == 1 { return 1; }
    let mut value = 1;
    let mut value_anterior = 0;
    for _i in 2..=iter{
        let aux = value; 
        value = value + value_anterior;
        value_anterior = aux;
    }
    value
}

pub fn fibonacci_reccursive(n: i32) -> i32 {
	if n < 0 {
		panic!("{} is negative!", n);
	}
	match n {
		0     => 0,
		1 | 2 => 1,
		3     => 2,
		_     => fibonacci_reccursive(n - 1) + fibonacci_reccursive(n - 2)
	}
}

