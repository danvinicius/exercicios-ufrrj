package decomp.ic805.livroDeNotas;

public class LivroDeNotasTeste
{ 
   public static void main(String[] args){
      double[] vetorDeNotas = {8.7, 6.8, 9.4, 10.0, 8.3, 7.8, 8.5, 9.1, 7.6, 8.7};
      
      LivroDeNotas meuLivroDeNotas = new LivroDeNotas(
    		  "IC805 Linguagem de Programacao III", vetorDeNotas);
      System.out.printf("Bemvindo ao Livro de Notas de%n%s%n%n", 
    		  meuLivroDeNotas.getNomeDaDisciplina());
      meuLivroDeNotas.processarNotasDaTurma();
   } 
} 