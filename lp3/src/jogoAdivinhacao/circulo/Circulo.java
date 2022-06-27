package decomp.ic805.circulo;

public class Circulo {
	  double raio;
	  
	  Circulo(){
	    raio = 1.0;
	  }

	  Circulo (double novoRaio){
	    raio = novoRaio;
	  }

	  double calculaArea(){
	    return raio * raio *Math.PI;
	  }
	}

