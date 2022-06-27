package decomp.ic805.livroDeNotas;

public class LivroDeNotas{
   private String nomeDaDisciplina; 
   private double[] notasDaTurma; 
   
   public LivroDeNotas(String nomeDaDisciplina, double[] notasDaTurma){
      this.nomeDaDisciplina = nomeDaDisciplina;
      this.notasDaTurma = notasDaTurma; 
   } 

   public void setNomeDaDisciplina(String nomeDaDisciplina){
      this.nomeDaDisciplina = nomeDaDisciplina; 
   } 

   public String getNomeDaDisciplina(){
      return nomeDaDisciplina;
   } 

   public void processarNotasDaTurma(){
      listarNotasDaTurma();

      System.out.printf("%nA media da turma eh: %.2f%n", obterMedia()); 

      System.out.printf("A menor nota eh: %.1f%nA maior nota eh: %.1f%n%n",
    		  encontrarMinimaNota(), encontrarMaximaNota());

      mostrarGraficoBarras();
   } 

   public double encontrarMinimaNota(){ 
      double notaMinima = notasDaTurma[0]; 

      for (double nota : notasDaTurma){
         if (nota < notaMinima)
            notaMinima = nota; 
      } 

      return notaMinima; 
   } 

   public double encontrarMaximaNota(){ 
	   double notaMaxima = notasDaTurma[0]; 

      for (double nota : notasDaTurma){
         if (nota > notaMaxima)
            notaMaxima = nota; 
      }

      return notaMaxima; 
   } 

   public double obterMedia(){      
      double total = 0; 
 
      for (double nota : notasDaTurma)
         total += nota;

      return total / notasDaTurma.length;
   } 

   public void mostrarGraficoBarras(){
      System.out.println("Distribuicao das notas:");

      double[] frequencia = new double[11];
      
      for (double nota : notasDaTurma)
         ++frequencia[(int)(nota*10) / 10];

      for (int contador = 0; contador < frequencia.length; contador++){
         if (contador == 10)
            System.out.printf("%7.1f: ", 10.0); 
         else
            System.out.printf("%3.1f-%03.1f: ", 
            		(double)contador, (double)contador + 0.9); 
         
         for (int asterisco = 0; asterisco < frequencia[contador]; asterisco++)
            System.out.print("*");

         System.out.println(); 
      } 
   } 

   public void listarNotasDaTurma(){    
      System.out.printf("Lista das notas: %n%n");
      
      for (int aluno = 0; aluno < notasDaTurma.length; aluno++) 
         System.out.printf("Aluno %2d: %.1f%n", aluno + 1, notasDaTurma[aluno]);
   } 
}
