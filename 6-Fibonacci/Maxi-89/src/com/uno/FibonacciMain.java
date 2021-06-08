package com.uno.algoritmia.fibonacci.main;

import com.uno.algoritmia.fibonacc.model.Fibonacci;

public class FibonacciMain {

	public static void main(String[] args) {

		Fibonacci f1 = new Fibonacci("Fibonacci prueba1");
		System.out.println("Comenzando prueba: ".concat(f1.getNombre()));

		// System.out.println(f1.getChallenge());
		Long init = System.currentTimeMillis();
		System.out.println("\nEl numero fibonacci en esa pocision es el: \n" + f1.getValueInFibonacciSequence(50));
		Long finish = System.currentTimeMillis() - init;
		System.out.println("El tiempo fue de: " + finish + " milisegundos");
	}
}
