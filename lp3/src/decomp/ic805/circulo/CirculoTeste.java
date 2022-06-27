package decomp.ic805.circulo;

public class CirculoTeste {
	/** Método main */
	public static void main(String[] args) {
	// Cria um círculo com raio 1.0
	Circulo circulo1 = new Circulo();
	System.out.println("Area do circulo de raio " + circulo1.raio + " = "+circulo1.calculaArea());
	
	// Cria um círculo com raio 25
	Circulo circulo2 = new Circulo(25.0);
	System.out.println("Area do circulo de raio " + circulo2.raio + " = "+circulo2.calculaArea());
	
	// Cria um círculo com raio 125.0
	Circulo circulo3 = new Circulo(125.0);
	System.out.println("Area do circulo de raio " + circulo3.raio + " = "+circulo3.calculaArea());
	
	// Muda o valor do raio do círculo
	circulo2.raio = 100;
	System.out.println("Area do circulo de raio " + circulo2.raio + " = "+circulo2.calculaArea());
	}
}
