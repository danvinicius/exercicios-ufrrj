package decomp.ic805.circulo2;

public class Circulo2 {
	private double raio;
	Circulo2(){
		
	}
	
	Circulo2(double raio){
		this.raio = raio;
	}
	
	double calcularArea(){
		return Math.PI * Math.pow(raio,2);
	}

	public double getRaio() {
		return raio;
	}

	public void setRaio(double raio) {
		this.raio = raio;
	}
}
